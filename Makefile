CC = gcc
CFLAGS = -g -Wall -Wextra -Wno-unused-function
_LANG ?= c
TARGET_DIR = bin
TARGET=$(TARGET_DIR)/test_$(SUB_TOPIC)
SRC=$(TOPIC)/$(SUB_TOPIC)/$(_LANG)

all:
	@mkdir -p $(TARGET_DIR)
	$(CC) $(CFLAGS) $(SRC)/*.$(_LANG) -o $(TARGET)
run:
	./$(TARGET)
