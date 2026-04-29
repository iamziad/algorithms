CC = gcc
_LANG ?= c
TARGET_DIR = bin
SRC_PATH=$(TOPIC)/$(SUB_TOPIC)/$(LANG)
TARGET_PATH=TARGET_DIR/test_$(SUB_TOPIC)

all:
	# @mkdir -p $(TARGET_DIR)
	$(CC) $(TOPIC)/$(SUB_TOPIC)/$(_LANG)/*.c -o $(TARGET_DIR)/test_$(SUB_TOPIC)
run:
	bin/test_$(SUB_TOPIC)
