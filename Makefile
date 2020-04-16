# Makefile for the project

# The directory with our source code
S=src
# The directory where we put our build files
B=build

CC=g++
CFLAGS = -Wall -Wextra -Werror -pedantic --std=gnu++11 -g

OBJS =  $(B)/control.o\
	$(B)/doctor.o\
	$(B)/patient.o\
	$(B)/ward.o\

.PHONY = all clean run

all: $(B)/App

run: $(B)/App
	$(B)/App

clean:
	rm -f $(B)/*

$(B)/App: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(B)/App

$(OBJS) : $(B)/%.o : $(S)/%.cpp $(B)
	$(CC) $(CFLAGS) -c $< -o $@

$(B):
	mkdir -p $(B)
