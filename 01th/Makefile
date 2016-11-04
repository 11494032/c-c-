CC = g++
CFLAGS = -g
TARGET = person
SRC=$(wildcard *.cpp)
#OBJS= $(patsubst %cpp,%o,$(SRCS))
OBJS= person.o dog.o main.o
all:$(TARGET)

$(TARGET):$(OBJS)

	$(CC) $(CFLAGS) -o $@ $^	
%.o:%.cpp
	$(CC) $(CFLAGS) -c $<
clean:
	rm -rf $(TARGET) *.o