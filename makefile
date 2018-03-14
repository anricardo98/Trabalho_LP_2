#Makefile for "dados_lancamento" C++ application
#Created by Hand  22/02/2017

PROG = dados_lancamento
CC = g++
cppflags = -O0 -g -Wall -pedantic
OBJS = main.o dados.o

$(PROG): $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o:
	$(CC) $(cppflags) -c main.cpp

dados.o: dados.hpp
	$(CC) $(cppflags) -c dados.cpp

clean:
	rm -f *.o
