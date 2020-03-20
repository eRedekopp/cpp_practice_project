# Makefile for the project

# The directory with our source code
S=src
# The directory where we put our build files
B=build

CC=g++
CFLAGS = -Wall -Wextra -Werror -pedantic --std=gnu++11

OBJS =\
	$(B)/control.o

.PHONY = all clean

all: executable

clean:
	rm -f $(B)/*

executable: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(B)/App

$(OBJS) : $(B)/%.o : $(S)/%.cpp $(B)
	$(CC) $(CFLAGS) -c $< -o $@

$(B):
	mkdir -p $(B)
