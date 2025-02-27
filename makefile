game: address.o date.o student.o main.o
	g++ -g address.o date.o student.o main.o -o game

main.o: address.h date.h student.h main.cpp
	g++ -c -g main.cpp

address.o: address.h address.cpp
	g++ -c -g address.cpp

date.o: date.h date.cpp
	g++ -c -g date.cpp

student.o: address.h date.h student.h student.cpp
	g++ -c -g student.cpp

run: game
	./game

debug: game
	gdb game

valgrind: game
	valgrind ./game

clean:
	rm *.o
	rm game
