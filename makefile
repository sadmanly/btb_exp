BTB_SOURCE = Block.cpp Blockchain.cpp btb_main.cpp sha256.cpp user.cpp
BTB_HEADER = -I./
CC = g++
CCFLAG = -g \
		 -Wall \
		 -std=c++11
LIB = -L./
BTB_OBJ = $(BTB_SOURCE:.cpp=.o)
TARGET = run

all:$(TARGET)

$(BTB_OBJ) : $(BTB_SOURCE)
	$(CC) -c $(BTB_SOURCE) $(CCFLAG) $(LIB)

$(TARGET) : $(BTB_OBJ) 
	$(CC) -o $@ $^ 

clean:
	rm -rf *.o $(TARGET) 
