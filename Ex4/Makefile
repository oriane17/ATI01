CC = gcc
CFLAGS = -c -Wall -O2
LDFLAGS = -lm

ex4 : main.o maj.o
	$(CC) -o ex4 $(LDFLAGS) main.o maj.o

%.o : %.c 
	$(CC) $(CFLAGS) $<

all : test

clean:
	rm -fr *.o
	rm -fr ex4
