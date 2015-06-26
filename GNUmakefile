include $(GNUSTEP_MAKEFILES)/common.make

#
# Application information
#
VERSION = 0.1
APP_NAME = CheriVis

#
# Resource files
#
CheriVis_LANGUAGES = English
CheriVis_RESOURCE_FILES = \
	CheriVis/Base.lproj/MainMenu.xib \
	CheriVis.tiff
CheriVis_APPLICATION_ICON = CheriVis.tiff
CheriVis_MAIN_MODEL_FILE = MainMenu.xib

#
# Source code
#
CheriVis_OBJCC_FILES = \
	CVColors.mm\
	CVDisassemblyController.mm\
	CheriVis.mm


CheriVis_OBJC_FILES = \
	main.m

#
# Compile flags
#
COMPILE_FLAGS= -g -fobjc-arc -O0
ADDITIONAL_OBJCFLAGS  = -std=c11  ${COMPILE_FLAGS}
ADDITIONAL_OBJCCFLAGS = -std=gnu++11 -Wno-variadic-macros -Wno-gnu ${COMPILE_FLAGS} -fno-rtti
ADDITIONAL_LDFLAGS = -lcheritrace

include $(GNUSTEP_MAKEFILES)/application.make
