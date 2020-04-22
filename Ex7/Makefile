CC = gcc
CFLAGS = -c -g -Wall -O2
LDFLAGS = -lm

ex7 : main.o cesar.o
	$(CC) -o ex7 $(LDFLAGS) main.o cesar.o

%.o : %.c 
	$(CC) $(CFLAGS) $<

all : test

clean:
	rm -fr *.o
	rm -fr ex7
