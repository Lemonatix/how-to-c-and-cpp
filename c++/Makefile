# c++/Makefile
CPPFILES := $(wildcard *.cpp)
TARGETS := $(CPPFILES:.cpp=)

.PHONY: all run clean

all: $(TARGETS)

%: %.cpp
	@echo "Compiling $<..."
	g++ -Wall -g $< -o $@

run: all
	@for target in $(TARGETS); do \
		echo "Running $$target..."; \
		./$$target; \
		echo ""; \
		echo ""; \
	done

clean:
	rm -f $(TARGETS)
	@echo "Cleaned up all targets."