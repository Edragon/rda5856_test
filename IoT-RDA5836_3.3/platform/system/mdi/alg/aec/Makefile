## --------------Don't change the line below------------------ ##
# For more information on the different variables, and others you
# may define, see ${SOFT_DIR}/Makefile.skel and/or read the doc
include ${SOFT_WORKDIR}/env/compilation/compilevars.mk

LOCAL_NAME := platform/system/mdi/alg/aec

# list all modules APIs that are neccessary to compile this module
LOCAL_API_DEPENDS ?= platform platform/base/common platform/chip/${CT_ASIC} \
                     platform/chip/hal platform/vpp/aec

# list all the modules that need to be compiled prior to using this module
LOCAL_MODULE_DEPENDS ?= 

# Generates the CoolWatcher headers automatically.
AUTO_XMD2H := yes

## ------------------------------------- ##
##  Voc project to compile               ##
## ------------------------------------- ##
# only one project at a time please.
LOCAL_VOCPROJ_NAME := vpp_aec

## ------------------------------------- ##
##	List all your sources here           ##
## ------------------------------------- ##
include src/make.srcs

## ------------------------------------- ##
##  Do Not touch below this line         ##
## ------------------------------------- ##
include ${SOFT_WORKDIR}/env/compilation/compilerules.mk
