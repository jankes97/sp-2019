CC = gcc
CFLAGS = -c -Wall -std=c11
LDLIBS = -lm

all: day1 day2 day19
day1: day1.o day2.o day19.o 
day1.o: day1.c day2.c day19.c

clean:
  rm -f *.o

run1: day1
  ./day1

run2: day2
  ./day2

run19: day19
  ./day19
