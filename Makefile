.PHONY: all run clean c c++ c-run c++-run c-clean c++-clean

all: c c++

run: c-run c++-run

clean: c-clean c++-clean

c:
	@echo ">>> Building C files..."
	$(MAKE) -C c

c++:
	@echo ">>> Building C++ files..."
	$(MAKE) -C c++

c-run:
	@echo ">>> Running C programs..."
	$(MAKE) -C c run

c++-run:
	@echo ">>> Running C++ programs..."
	$(MAKE) -C c++ run

c-clean:
	@echo ">>> Cleaning C binaries..."
	$(MAKE) -C c clean

c++-clean:
	@echo ">>> Cleaning C++ binaries..."
	$(MAKE) -C c++ clean
