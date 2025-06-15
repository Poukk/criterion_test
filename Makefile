CC = gcc
CFLAGS = -Wall -Wextra -std=c99
SRCDIR = src
INCDIR = include
BINDIR = bin

SOURCES = $(SRCDIR)/main.c $(SRCDIR)/fibonacci.c
TARGET = $(BINDIR)/main

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(SOURCES) | $(BINDIR)
	$(CC) $(CFLAGS) -I$(INCDIR) $(SOURCES) -o $(TARGET)

$(BINDIR):
	mkdir -p $(BINDIR)

clean:
	rm -rf $(BINDIR)
