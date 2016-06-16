CC=g++ -std=c++11
CFLAGS=-c -g -Wall

all: driver

driver: main.o job.o
	$(CC) main.o job.o -g -o driver

main.o: main.cpp 
	$(CC) $(CFLAGS) main.cpp

job.o: job.cpp job.h
	$(CC) $(CFLAGS) job.cpp

clean:
	rm -f *.o driver
