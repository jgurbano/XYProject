
all:
	g++ -Isrc -o testcpp main.cpp main.c

clean:
	rm -rf testcpp interm
