CC = gcc
CFLAGS = -c -Wall -std=c11
LDLIBS = -lm

all: z1, z2
z1: z1.o 
z1.o: z1.c

z2: z2.o 
z2.o: z2.c

clean:
  rm -f *.o

run: z1
./z1

run: z2
./z2