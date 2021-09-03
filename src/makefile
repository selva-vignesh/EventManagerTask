IDIR =../include
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=../bin
LDIR =../lib

LIBS=-lm

_DEPS = func.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = init.o eventManager.o module.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

init: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)
