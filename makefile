CC      = gcc
CFLAGS  = -Wall -g
OBJS    =Formulas-I-O-.o	ChemFunLib.o 

all:	Formulas-I-O-

Formulas-I-O-:	$(OBJS)
	$(CC)	$(CFLAGS)	$(OBJS)	-o	Formulas-I-O- 

Formulas-I-O-.o:	Formulas-I-O-.c
ChemFunLib.o:	ChemFunLib.c


clean:
	rm -f *~ *.o Formula-I-O-








