CC = gcc
CFLAGS = -c -g -Wall -O2
LDFLAGS = -lm

ex2 : main.o remplacement.o
	$(CC) -o ex2 $(LDFLAGS) main.o remplacement.o

%.o : %.c 
	$(CC) $(CFLAGS) $<

all : test

clean:
	rm -fr *.o
	rm -fr ex2
