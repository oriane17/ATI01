CC = gcc
CFLAGS = -c -Wall -O2
LDFLAGS = -lm

ex8 : main.o hydre.o
	$(CC) -o ex8 $(LDFLAGS) main.o hydre.o

%.o : %.c 
	$(CC) $(CFLAGS) $<

all : test

clean:
	rm -fr *.o
	rm -fr ex8
