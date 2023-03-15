.PHONY: all
CC = gcc 
FLAGS = -c

SRC = main.c my_put.c 
OBJ = $(SRC:.c=.o)
EXE = my_make_evolve

$(EXE) : $(OBJ)
	$(CC) -o $(EXE) $(OBJ) 
	
all: 
	$(EXE)
	

# main.o: main.c
# 	$(CC) $(FLAGS) -o main.o  main.c $(LDFLAGS)

# my_put.o: my_put.c
# 	$(CC) $(FLAGS) -o my_put.o  my_put.c $(LDFLAGS)

# header.o: header.h
# 	$(CC) $(FLAGS) -o header.o header.h $(LDFLAGS)

clean:
	rm -f $(OBJ) $(exe)

distclean: clean
	rm -f *.o $(EXE)