# Edit following two lines to set component requirements (see docs)




set(COMPONENT_ADD_INCLUDEDIRS 
  "."
)

register_component()



set(src_file ${CMAKE_SOURCE_DIR}/components/ISODesigner/MyWorkspace1/MyProject1/Output/MyProject1.iop)
set(dst_file ${CMAKE_SOURCE_DIR}/components/pools/spiffs_image/pools/MyProject1.iop)


# After build, copy the MyProject1.iop
add_custom_command(OUTPUT ${dst_file}
                  COMMAND ${CMAKE_COMMAND} -E echo "Copying MyProject1.iop to spiffs_image..."
                  COMMAND ${CMAKE_COMMAND} -E copy ${src_file}    ${dst_file}
                  DEPENDS ${src_file})
                  
add_custom_target(update_spiffs DEPENDS "${dst_file}")

# Create a SPIFFS image from the contents of the 'spiffs_image' directory
# that fits the partition named 'storage'. FLASH_IN_PROJECT indicates that
# the generated image should be flashed when the entire project is flashed to
# the target with 'idf.py -p PORT flash'.
spiffs_create_partition_image(storage spiffs_image FLASH_IN_PROJECT DEPENDS update_spiffs)
