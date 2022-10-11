CC=gcc
CFLAGS="-Wall"

debug:clean
	$(CC) $(CFLAGS) -g -o lotto main.c tirage.c
stable:clean
	$(CC) $(CFLAGS) -o lotto main.c tirage.c
clean:
	rm -vfr *~ lotto
