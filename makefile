object = complexe.o usecomplexe.o
cc = gcc
flags = -Wall

usecomplexe : $(object)
	$(cc) $(flags) $(object) -o usecomplexe -lm
usecomplexe.o : usecomplexe.c complexe.h
	$(cc) $(flags) -c usecomplexe.c -lm
complexe.o : complexe.c complexe.h
	 $(cc) $(flags) -c complexe.c -lm
