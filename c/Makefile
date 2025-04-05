# c/Makefile
CFILES := $(wildcard *.c)
TARGETS := $(CFILES:.c=)

all: $(TARGETS)

%: %.c
	@echo "Compiling $<..."
	gcc -Wall -g $< -o $@

clean:
	rm -f $(TARGETS)
