CC=gcc
CXX=g++
CFLAGS=-O2 -Wall

all: libg729.c
	$(CXX) $(CFLAGS) -c  -o libg729.o libg729.c

libg729.o: libg729.c
	$(CXX) $(CFLAGS) -c  -o libg729.o libg729.c

lib: libg729.o
	cp EasyG729A.a libg729.a
	ar -cr libg729.a libg729.o

clean:
	rm libg729.o
