CC = g++
CFLAGS = -Wall -Werror
all: graph

graph: graphTraining_main.o
	$(CC) $(CFLAGS) -o graph graphTraining_main.o

graphTraining_main.o: graphTraining_main.cpp graphTraining_main.h
	$(CC) $(CFLAGS) -c graphTraining_main.cpp

clean:
	rm -f graph *.o
