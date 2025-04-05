# c++/Makefile
CPPFILES := $(wildcard *.cpp)
TARGETS := $(CPPFILES:.cpp=)

all: $(TARGETS)

%: %.cpp
	@echo "Compiling $<..."
	g++ -Wall -g $< -o $@

run: 
	$(MAKE) $(FILE)
	@echo "Running $(FILE)..."
	./$(FILE)

clean:
	rm -f $(TARGETS)
	@echo "Cleaned up all targets."