CC = gcc
CFLAGS = -Wall -Wextra -std=c99
CRITERION_LIB_DIR = ./criterion/lib
CRITERION_INCLUDE_DIR = ./criterion/include

SOURCES = fibonacci_test.c ../src/fibonacci.c
TARGET = fibonacci_test
LINKFLAGS = -L$(CRITERION_LIB_DIR) -lcriterion

.PHONY: all clean test

all: $(TARGET)

$(TARGET): $(SOURCES)
	LD_LIBRARY_PATH=$(CRITERION_LIB_DIR) $(CC) $(CFLAGS) -I$(CRITERION_INCLUDE_DIR) -I../include $(SOURCES) $(LINKFLAGS) -o $(TARGET)

test: $(TARGET)
	LD_LIBRARY_PATH=$(CRITERION_LIB_DIR) ./$(TARGET)

clean:
	rm -f $(TARGET)
