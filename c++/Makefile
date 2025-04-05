# c++/Makefile
CPPFILES := $(wildcard *.cpp)
TARGETS := $(CPPFILES:.cpp=)

all: $(TARGETS)

%: %.cpp
	@echo "Compiling $<..."
	g++ -Wall -g $< -o $@

clean:
	rm -f $(TARGETS)
