
result: main.o misc.o insertionsort.o heapsort.o
		g++ -c main.o misc.o insertionsort.o heapsort.o
		
main.o: main.cpp
		g++ -c main.cpp

misc.o: ./misc/misc.cpp ./misc/misc.hpp
		g++ -c ./misc/misc.cpp ./misc/misc.hpp

insertionsort.o: ./sortalgo/sortalgo.hpp ./sortalgo/insertionsort.cpp
		g++ -c ./sortalgo/insertionsort.cpp ./sortalgo/sortalgo.hpp

heapsort.o: ./sortalgo/heapsort.cpp ./sortalgo/sortalgo.hpp
		g++ -c ./sortalgo/heapsort.cpp ./sortalgo/sortalgo.hpp

clean: 
		del *.o result