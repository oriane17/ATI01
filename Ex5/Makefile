CC = gcc
CFLAGS = -c -g -Wall -O2
LDFLAGS = -lm

ex5 : main.o mirror.o
	$(CC) -o ex5 $(LDFLAGS) main.o mirror.o

%.o : %.c 
	$(CC) $(CFLAGS) $<

all : test

clean:
	rm -fr *.o
	rm -fr ex5
