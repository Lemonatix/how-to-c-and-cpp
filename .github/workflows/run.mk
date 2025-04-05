.PHONY: all clean

all: c_program cpp_program

c_program:
	$(MAKE) -C c

cpp_program:
	$(MAKE) -C c++

clean:
	$(MAKE) -C c clean
	$(MAKE) -C c++ clean
