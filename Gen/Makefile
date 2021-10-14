IDIR =./include
SRCDIR=./src
CC=g++
CFLAGS=-Wall -std=c++11 -I$(IDIR)

ODIR=./build

LIBS=

_DEPS =
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

EXE=main

.PHONY: clean all

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $(EXE)

$(ODIR)/main.o: $(SRCDIR)/main.cpp
	$(CC) $(CFLAGS) $(SRCDIR)/main.cpp -c -o $@

clean:
	rm -f $(ODIR)/*.o $(EXE)