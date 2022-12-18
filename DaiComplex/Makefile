complex:
	g++ -c complex.cpp -o complex.o

main: complex.o complex.h main.cpp
	g++ main.cpp complex.o -o main
run: complex.cpp complex.h main.cpp
	make complex
	make main
	./main