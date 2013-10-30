ADD_DEFINITIONS(
	-D_CRT_NONSTDC_NO_DEPRECATE
	-D_CRT_SECURE_NO_WARNINGS
)

ADD_LIBRARY(xPL
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

IF(WIN32)
	TARGET_LINK_LIBRARIES(xPL
		iphlpapi
		ws2_32
	)
ENDIF(WIN32)

subdirs(
	examples
)