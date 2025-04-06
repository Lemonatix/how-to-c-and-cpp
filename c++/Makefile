# Makefile for C++ only

CPPFILES := $(wildcard *.cpp)
TARGETS := $(CPPFILES:.cpp=)

UNAME := $(shell uname)
CXX := g++

ifeq ($(UNAME), Darwin)
    CXX := clang++
endif

.PHONY: all run clean

all: $(TARGETS)

%: %.cpp
	@echo "Compiling $< with $(CXX)..."
	$(CXX) -Wall -g $< -o $@
	@echo ""

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