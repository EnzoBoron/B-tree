SRC =		./src/btree.cpp \
			./src/btreeNode.cpp

CC = g++
CFLAG = Wall
EXEC_NAME = Btree

all: $(EXEC_NAME)

$(EXEC_NAME):
	$(CC) -o $(EXEC_NAME) $(SRC)

clean:
	rm -f $(EXEC_NAME)

re: clean all