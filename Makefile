
#I have no idea wtf im typing tbh!!! I'm just copying rectangles. Seriously what is this flag, money sign with closed captioning wtf?
#Fill in the dependencies and rules to make the make file
CC=gcc
LD=gcc
ifdef DEBUG
CFLAGS= -std=c99 -ggdb -Wall
else
CFLAGS= -std=c99 -O3
endif
LIBS= -lm

testVectors: testVectors.o vectors.o vectors.h
	$(LD) -o testVectors vectors.o testVectors.o $(LIBS)	

testVectors.o: testVectors.c
	$(CC) $(CFLAGS) -o testVectors.o -c testVectors.c 

vectors.o: vectors.c vectors.h
	$(CC) $(CFLAGS) -o vectors.o -c vectors.c 

clean:
	rm *.o
	rm testVectors