ADD_EXECUTABLE(xPL-clock
	xPL_Clock.c
)
TARGET_LINK_LIBRARIES(xPL-clock
	xPL
)

ADD_EXECUTABLE(xPL-config-clock
	xPL_ConfigClock.c
)
TARGET_LINK_LIBRARIES(xPL-config-clock
	xPL
)

ADD_EXECUTABLE(xPL-hub
	xPL_Hub.c
)
TARGET_LINK_LIBRARIES(xPL-hub
	xPL
)

ADD_EXECUTABLE(xPL-logger
	xPL_Logger.c
)
TARGET_LINK_LIBRARIES(xPL-logger
	xPL
)

ADD_EXECUTABLE(xPL-send
	xPLSend.c
)
TARGET_LINK_LIBRARIES(xPL-send
	xPL
)
