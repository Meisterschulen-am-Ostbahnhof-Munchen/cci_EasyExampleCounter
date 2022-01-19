# Edit following two lines to set component requirements (see docs)



set(COMPONENT_SRCS 
  "App_Base.c"
)

set(COMPONENT_ADD_INCLUDEDIRS 
  "."
)


set(COMPONENT_REQUIRES 
)

set(COMPONENT_PRIV_REQUIRES 
	App_VTClient
	App_TCClient
	cci 
	IsoConfig 
	Settings
	AppCommon 
	Diagnostic  
	SerialNumber
)

register_component()

set_property(TARGET ${COMPONENT_LIB} APPEND PROPERTY LINK_INTERFACE_MULTIPLICITY 3)