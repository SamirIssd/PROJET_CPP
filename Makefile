CC=g++
CCFLAGS= -Wall -std=c++11 -g 
LIBFLAGS=
L = -I/usr/include/SDL2 -lSDL2_image -lSDL2_ttf -lSDL2 -lpthread
SRC= $(wildcard *.cc)
OBJ= $(SRC:.cc=.o)
TST= $(wildcard unitTest/*.cc)
OBJ_TEST = $(filter-out main.o, $(OBJ)) $(TST:.cc=.o)
EXEC= smoke 


all: $(EXEC)

testcase : $(OBJ_TEST) 
	g++ -std=c++11 -Wall  -o $@ $^

$(EXEC): $(OBJ)
	$(CC) $(LIBFLAGS) $^ -o $@  

%.o: %.cc
	$(CC) $(CCFLAGS) -o $@ -c $< $(LIBFLAGS)

.depend:
	g++ -MM $(SRC) > .depends
-include .depends

clean:
	rm -f $(OBJ) $(EXEC)
cleantest:
	rm -f $(OBJ_TEST) testcase
distclean : clean cleantest
