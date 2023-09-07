pythagora5: main.o
	g++ -g -Wall main.o -o pythagora5 -O3

main.o: main.cpp
	g++ -g -Wall -c main.cpp -O3

clean:
	rm *.o pythagora5

run:
	./pythagora5