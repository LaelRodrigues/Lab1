RM = rm -rf 

# Compilador
CC=g++ 

LIB_DIR=./lib
INC_DIR=./include
SRC_DIR=./src
OBJ_DIR=./build
BIN_DIR=./bin
DOC_DIR=./doc
TEST_DIR=./test
 
CFLAGS=-Wall -pg -pedantic -ansi -std=c++11 -I. -I$(INC_DIR)

.PHONY: all clean doxy debug doc 


all: init questao1 questao2

debug: CFLAGS += -g -O0
debug: all

init:
	@mkdir -p $(OBJ_DIR)/questao1
	@mkdir -p $(OBJ_DIR)/questao2
	@mkdir -p $(BIN_DIR)

questao1: CFLAGS+= -I$(INC_DIR)/questao1
questao1: $(OBJ_DIR)/questao1/area.o $(OBJ_DIR)/questao1/calcarea.o $(OBJ_DIR)/questao1/perimetro.o $(OBJ_DIR)/questao1/calcperimetro.o $(OBJ_DIR)/questao1/volume.o $(OBJ_DIR)/questao1/calcvolume.o $(OBJ_DIR)/questao1/main.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel 'questao1' criado em $(BIN_DIR)] +++"
	@echo "============="
$(OBJ_DIR)/questao1/area.o: $(SRC_DIR)/questao1/area.cpp $(INC_DIR)/questao1/area.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/questao1/calcarea.o: $(SRC_DIR)/questao1/calcarea.cpp $(INC_DIR)/questao1/calcarea.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/questao1/perimetro.o: $(SRC_DIR)/questao1/perimetro.cpp $(INC_DIR)/questao1/perimetro.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/questao1/calcperimetro.o: $(SRC_DIR)/questao1/calcperimetro.cpp $(INC_DIR)/questao1/calcperimetro.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/questao1/volume.o: $(SRC_DIR)/questao1/volume.cpp $(INC_DIR)/questao1/volume.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/questao1/calcvolume.o: $(SRC_DIR)/questao1/calcvolume.cpp $(INC_DIR)/questao1/calcvolume.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/questao1/main.o: $(SRC_DIR)/questao1/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

questao2: CFLAGS+= -I$(INC_DIR)/questao2
questao2: $(OBJ_DIR)/questao2/fatorial.o $(OBJ_DIR)/questao2/primalidade.o $(OBJ_DIR)/questao2/main.o
	@echo "============="
	@echo "Ligando o alvo $@"
	@echo "============="
	$(CC) $(CFLAGS) -o $(BIN_DIR)/$@ $^
	@echo "+++ [Executavel 'questao2' criado em $(BIN_DIR)] +++"
	@echo "============="

$(OBJ_DIR)/questao2/fatorial.o: $(SRC_DIR)/questao2/fatorial.cpp $(INC_DIR)/questao2/fatorial.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/questao2/primalidade.o: $(SRC_DIR)/questao2/primalidade.cpp $(INC_DIR)/questao2/primalidade.h
	$(CC) -c $(CFLAGS) -o $@ $<

$(OBJ_DIR)/questao2/main.o: $(SRC_DIR)/questao2/main.cpp
	$(CC) -c $(CFLAGS) -o $@ $<

doxy:
	$(RM) $(DOC_DIR)/*
	doxygen -g

doc:
	doxygen

clean:
	$(RM) $(BIN_DIR)/* 
	$(RM) $(OBJ_DIR)/*