game: address.o main.o
	g++ -g address.o main.o -o game

main.o: address.h date.h student.h main.cpp
	g++ -c -g main.cpp

address.o: address.h address.cpp
	g++ -c -g address.cpp

run: game
	./game

debug: game
	gdb game

clean:
	rm *.o
	rm game
