CC = gcc
CFLAGS = -c -g -Wall -O2
LDFLAGS = -lm

ex10 : main.o factre.o
	$(CC) -o ex10 $(LDFLAGS) main.o factre.o

%.o : %.c 
	$(CC) $(CFLAGS) $<

all : test

clean:
	rm -fr *.o
	rm -fr ex10
