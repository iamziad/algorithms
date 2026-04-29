CC = gcc
_LANG ?= c
TARGET_DIR = bin
TARGET=$(TARGET_DIR)/test_$(SUB_TOPIC)
SRC=$(TOPIC)/$(SUB_TOPIC)/$(_LANG)

all:
	@mkdir -p $(TARGET_DIR)
	$(CC) $(SRC)/*.$(_LANG) -o $(TARGET)
run:all
	./$(TARGET)
