CC = gcc
CFLAGS = -c -Wall -O2
LDFLAGS = -lm

ex3 : main.o remplacement2.o
	$(CC) -o ex3 $(LDFLAGS) main.o remplacement2.o

%.o : %.c 
	$(CC) $(CFLAGS) $<

all : test

clean:
	rm -fr *.o
	rm -fr ex3
