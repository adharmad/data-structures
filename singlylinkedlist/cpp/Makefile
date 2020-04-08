CC = g++ -O

applications: sll

sll: 	main.o sll.o
		${CC} -o sll main.o sll.o

main.o: main.cpp sll.o

sll.o: sll.cpp sll.h

clean:
		rm *.o sll
