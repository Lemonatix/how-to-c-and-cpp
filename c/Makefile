# Makefile for C only

CFILES := $(wildcard *.c)
TARGETS := $(CFILES:.c=)

UNAME := $(shell uname)
CC := gcc

ifeq ($(UNAME), Darwin)
    CC := clang
endif

.PHONY: all run clean

all: $(TARGETS)

%: %.c
	@echo "Compiling $< with $(CC)..."
	$(CC) -Wall -g $< -o $@
	@echo ""

run: all
	@for target in $(TARGETS); do \
		echo "Running $$target..."; \
		./$$target; \
		echo ""; \
	done

clean:
	rm -f $(TARGETS)
	@echo "Cleaned up all targets."