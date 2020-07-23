SRCDIR = ./src
ODIR = ./bin
IDIR = ./include

CFLAGS = -std=c++1z -I$(IDIR)
LDFLAGS = -lncurses

#DEPS := $(wildcard $(IDIR)/)

_DEPS = main.hpp
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o load_config.o render.o entity.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o : $(SRCDIR)/%.cpp $(DEPS)
	g++ -c $(CFLAGS) -o $@ $< 


SimpleGame: $(OBJ)
	g++ $(CFLAGS) -o $@ $^ $(LDFLAGS)
	
	# g++ $(CFLAGS) -o SimpleGame main.cpp load_config.cpp $(LDFLAGS)

.PHONY: test clean

test: SimpleGame
	./SimpleGame

clean: 
	rm -f bin/*
	rm -f SimpleGame
