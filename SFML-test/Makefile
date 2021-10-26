IDIR =./include
SRCDIR=./src
CC=g++
CFLAGS=-Wall -I$(IDIR)

ODIR=./build

LIBS=-lsfml-window -lsfml-graphics -lsfml-system

_DEPS = game.h display.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o game.o display.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

EXE=main

.PHONY: clean all

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $(EXE) $(LIBS)

$(ODIR)/main.o: $(SRCDIR)/main.cpp $(IDIR)/game.h
	$(CC) $(CFLAGS) $(SRCDIR)/main.cpp -c -o $@

$(ODIR)/game.o: $(SRCDIR)/game.cpp $(IDIR)/game.h $(IDIR)/display.h
	$(CC) $(CFLAGS) $(SRCDIR)/game.cpp -c -o $@

$(ODIR)/display.o: $(SRCDIR)/display.cpp $(IDIR)/display.h
	$(CC) $(CFLAGS) $(SRCDIR)/display.cpp -c -o $@
clean:
	rm -f $(ODIR)/*.o $(EXE)