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
		echo "Finished running $$target."; \
	done

clean:
	rm -f $(TARGETS)
	@echo "Cleaned up all targets."