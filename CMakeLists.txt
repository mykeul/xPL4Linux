CMAKE_MINIMUM_REQUIRED(VERSION 2.8.8)

ADD_DEFINITIONS(
	-D_CRT_NONSTDC_NO_DEPRECATE
	-D_CRT_SECURE_NO_WARNINGS
)

IF(CMAKE_COMPILER_IS_GNUCC OR CMAKE_COMPILER_IS_GNUCXX)
	SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")
ENDIF()

ADD_LIBRARY(xPL_obj OBJECT
	msvc-compat.c
	msvc-compat.h
	xPL.h
	xPL_priv.h
	xPL-config.c
	xPL-hub.c
	xPL-io.c
	xPL-listeners.c
	xPL-message.c
	xPL-service.c
	xPL-store.c
	xPL-utils.c
)

ADD_LIBRARY(xPL SHARED $<TARGET_OBJECTS:xPL_obj>)

ADD_LIBRARY(xPL_static STATIC $<TARGET_OBJECTS:xPL_obj>)

IF(WIN32)
	TARGET_LINK_LIBRARIES(xPL
		iphlpapi
		ws2_32
	)
	TARGET_LINK_LIBRARIES(xPL_static
		iphlpapi
		ws2_32
	)
ENDIF(WIN32)

IF(UNIX)
	subdirs(
		examples
	)
ENDIF(UNIX)
