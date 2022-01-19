# Edit following two lines to set component requirements (see docs)



set(COMPONENT_SRCS 
  "GAux.c"
)

set(COMPONENT_ADD_INCLUDEDIRS 
  "."
)


set(COMPONENT_REQUIRES 
)

set(COMPONENT_PRIV_REQUIRES 
	cci 
	IsoConfig 
	ISODesigner
)

register_component()
