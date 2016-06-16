CC=g++ -std=c++11
CFLAGS=-c -g -Wall

all: driver

driver: main.o job.o cpu.o
	$(CC) main.o job.o cpu.o -g -o driver

main.o: main.cpp 
	$(CC) $(CFLAGS) main.cpp

job.o: job.cpp job.h
	$(CC) $(CFLAGS) job.cpp

cpu.o: cpu.cpp cpu.h
	$(CC) $(CFLAGS) cpu.cpp

clean:
	rm -f *.o *.sw* driver
