IDIR =./include
SRCDIR=./src
CC=g++
CFLAGS=-Wall -I$(IDIR) -std=c++11

ODIR=./build

LIBS=

_DEPS = entity.hpp
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o entity.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

EXE=main

.PHONY: clean all

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $(EXE)

$(ODIR)/main.o: $(SRCDIR)/main.cpp $(SRCDIR)/entity.cpp $(IDIR)/entity.hpp
	$(CC) $(CFLAGS) $(SRCDIR)/main.cpp -c -o $@

$(ODIR)/entity.o: $(SRCDIR)/entity.cpp $(IDIR)/entity.hpp
	$(CC) $(CFLAGS) $(SRCDIR)/entity.cpp -c -o $@

clean:
	rm -f $(ODIR)/*.o $(EXE)