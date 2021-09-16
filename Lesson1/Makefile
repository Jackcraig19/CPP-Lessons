IDIR =./include
SRCDIR=./src
CC=g++
CFLAGS=-Wall -I$(IDIR)

ODIR=./build

LIBS=

_DEPS = bank.h answers.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o answers.o bank.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

EXE=main

.PHONY: clean all

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(OBJ) -o $(EXE)

$(ODIR)/main.o: $(SRCDIR)/main.cpp $(IDIR)/answers.h $(IDIR)/bank.h
	$(CC) $(CFLAGS) $(SRCDIR)/main.cpp -c -o $@

$(ODIR)/bank.o: $(SRCDIR)/bank.cpp $(IDIR)/bank.h
	$(CC) $(CFLAGS) $(SRCDIR)/bank.cpp -c -o $@

$(ODIR)/answers.o: $(SRCDIR)/answers.cpp $(IDIR)/answers.h
	$(CC) $(CFLAGS) $(SRCDIR)/answers.cpp -c -o $@

clean:
	rm -f $(ODIR)/*.o $(EXE)