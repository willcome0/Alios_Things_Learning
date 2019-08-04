NAME := myapp1

$(NAME)_MBINS_TYPE := app
$(NAME)_VERSION := 1.0.0
$(NAME)_SUMMARY := myapp1 sample based on blink
$(NAME)_SOURCES := blink.c

$(NAME)_COMPONENTS += osal_aos

GLOBAL_DEFINES += AOS_NO_WIFI

GLOBAL_INCLUDES += ./
