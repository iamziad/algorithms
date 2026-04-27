CC = gcc
CFLAGS = -g -Wall -Wextra -Wno-unused-function
TARGET = bin/main
FILE ?=

all: build
ifeq ($(FILE),)
	$(CC) $(CFLAGS) main.c -o $(TARGET)
else
	$(CC) $(CFLAGS) main.c src/$(FILE) -o $(TARGET)
endif

build:
	@mkdir -p bin

clean:
	@rm $(TARGET)
