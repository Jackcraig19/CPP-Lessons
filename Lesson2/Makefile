IDIR =./include
SRCDIR=./src
CC=g++
CFLAGS=-Wall -I$(IDIR)

ODIR=./build

LIBS=

_DEPS = answers.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o answers.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

EXE=main

.PHONY: clean all

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $(EXE)

$(ODIR)/main.o: $(SRCDIR)/main.cpp $(IDIR)/answers.h
	$(CC) $(CFLAGS) $(SRCDIR)/main.cpp -c -o $@

$(ODIR)/answers.o: $(SRCDIR)/answers.cpp $(IDIR)/answers.h
	$(CC) $(CFLAGS) $(SRCDIR)/answers.cpp -c -o $@

clean:
	rm -f $(ODIR)/*.o $(EXE)