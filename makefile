game: address.o date.o main.o
	g++ -g address.o date.o main.o -o game

main.o: address.h date.h main.cpp
	g++ -c -g main.cpp

address.o: address.h address.cpp
	g++ -c -g address.cpp

date.o: date.h date.cpp
	g++ -c -g date.cpp

run: game
	./game

debug: game
	gdb game

clean:
	rm *.o
	rm game
