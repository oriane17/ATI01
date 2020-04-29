CC = gcc
CFLAGS = -c -g -Wall -O2
LDFLAGS = -lm

ex9 : main.o factit.o
	$(CC) -o ex9 $(LDFLAGS) main.o factit.o

%.o : %.c 
	$(CC) $(CFLAGS) $<

all : test

clean:
	rm -fr *.o
	rm -fr ex9
