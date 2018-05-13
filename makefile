CC = gcc
CFLAGS = -Wall -g -std=c99 -pedantic -Iincludes -c -o

BIN = bin/
SRC = src/


all:
	$(CC) $(CFLAGS) $(BIN)frc.o $(SRC)frc.c
	$(CC) $(BIN)frc.o -o $(BIN)frc

clean:
	rm $(BIN)*.o
