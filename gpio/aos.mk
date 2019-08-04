NAME := gpio

$(NAME)_MBINS_TYPE := app
$(NAME)_VERSION := 1.0.0
$(NAME)_SUMMARY := gpio sample based on blink
$(NAME)_SOURCES := gpio.c

$(NAME)_COMPONENTS += osal_aos

GLOBAL_DEFINES += AOS_NO_WIFI

GLOBAL_INCLUDES += ./
