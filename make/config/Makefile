#
# Makefile - for making config
#
# Copyright (c) 2017 Sunil
# 

SRCS=$(wildcard *.cc)
OBJS=$(SRCS:.cc=.o)

.PHONY : all
all : ${OBJS}

include ../common.mk

CFLAGS += -I ../libs/include/
