# Edit following two lines to set component requirements (see docs)



set(COMPONENT_SRCS 
  "App_VTClient.c"
  "App_VTClientLev2.c"
  "AppMemAccess.cpp"
)

set(COMPONENT_ADD_INCLUDEDIRS 
  "."
)


set(COMPONENT_REQUIRES 
)

set(COMPONENT_PRIV_REQUIRES 
	cci 
	IsoConfig 
	Settings
	AppCommon 
	Diagnostic  
	pools
	ISODesigner
	GAux
	AppPool
)

register_component()
