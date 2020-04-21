CC = gcc
CFLAGS = -c -g -Wall -O2
LDFLAGS = -lm

ex6 : main.o palindrome.o
	$(CC) -o ex6 $(LDFLAGS) main.o palindrome.o

%.o : %.c 
	$(CC) $(CFLAGS) $<

all : test

clean:
	rm -fr *.o
	rm -fr ex6
