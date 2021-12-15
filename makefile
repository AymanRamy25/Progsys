CC=gcc
usecomplexe: usecomplexe.o complexe.o
  $(cc) -Wall -lm usecomplexe.o complexe.o -o usecomplexe
usecomplexe.o: usecomplexe.c complexe.h
  $(cc) -Wall -c usecomplexe.c
usecomplexe.o: complexe.c complexe.h
  $(cc) -Wall -c complexe.c
