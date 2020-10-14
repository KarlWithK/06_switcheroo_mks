.POSIX:
.PHONY: run clean
CC= gcc
OBJECTS= main.o
LDLIBS= -lm

run: main 
	./main

main: $(OBJECTS)
	$(CC) -o main $(OBJECTS) $(LDLIBS)

main.o: main.c
	$(CC) -c main.c

clean:
	rm *.o
