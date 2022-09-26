prog: main.o
	g++ -g -Wall -std=c++20 main.o -o prog

main.o: main.cpp
	g++ -g -Wall -std=c++20 -c main.cpp

clean:
	rm *.o prog
run:
	./prog