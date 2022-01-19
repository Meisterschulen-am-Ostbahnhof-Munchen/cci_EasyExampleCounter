# Edit following two lines to set component requirements (see docs)



set(COMPONENT_SRCS 
  "App_Main.c"

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
	Settings 
	AppCommon 
	AppPool
	Diagnostic 
	AppCanDriverEsp32
	SerialNumber
	App_Base
	AddOn
)

register_component()
