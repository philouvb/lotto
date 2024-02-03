CC=gcc
CFLAGS=-Wall -Wextra -pedantic
LIBFLAGS=-c -g

all: tirage

tirage: main.o libtirage.a
	$(CC) $(CFLAGS) -o lotto main.o -L. -ltirage

main: main.c
	$(CC) $(LIBFLAGS) main.c

tirage.o: tirage.c tirage.h
	$(CC) $(LIBFLAGS) tirage.c

libtirage.a: tirage.o
	ar rcs libtirage.a tirage.o

libs: libtirage.a

clean:
	rm -vfr *~ *.o *.a *.gch lotto
