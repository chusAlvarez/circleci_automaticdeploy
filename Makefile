default: main
all: default

main:
	g++ -g -o run_nonstop main.cpp
	
.PHONY: clean
clean:
	rm -rf *.o run_nonstop
