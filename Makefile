#compiler format
CC = g++

#Flags used by the compiler
CFLAGS=-Wall -Werror -ansi -pedantic

#First target
all: 
#Creation of bin repository
mkdir -p bin
$(CC) $(CFLAGS) ./src/main.cpp -o bin/rshell

#Second target
rshell:
rshell.cpp.cpp
$(CC) $(CFLAGS) ./src/main.cpp -o bin/rshell
