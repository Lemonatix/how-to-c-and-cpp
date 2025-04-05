# c/Makefile
CFILES := $(wildcard *.c)
TARGETS := $(CFILES:.c=)

all: $(TARGETS)

%: %.c
	@echo "Compiling $<..."
	gcc -Wall -g $< -o $@

run:
	$(MAKE) $(FILE)
	@echo "Running $(FILE)..."
	./$(FILE)

clean:
	rm -f $(TARGETS)
	@echo "Cleaned up all targets."