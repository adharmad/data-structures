CC = gcc -O

applications: sll

sll: 	main.o sll.o
		${CC} -o sll main.o sll.o

main.o: main.c sll.o

sll.o: sll.c sll.h

clean:
		rm *.o sll
