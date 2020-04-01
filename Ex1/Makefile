CC = gcc
CFLAGS = -c -g -Wall -O2
LDFLAGS = -lm

ex1 : main.o longueur_chaine.o
	$(CC) -o ex1 $(LDFLAGS) main.o longueur_chaine.o

%.o : %.c
	$(CC) $(CFLAGS) $<

all : test

clean:
	rm -fr *.o
	rm -fr ex1
