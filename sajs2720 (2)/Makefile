#
#Programmer: SHAH JABEEN SAJID


# some settings
CC= g++ -std=c++11
CCFLAGS= -Wall
PRJ = draw
OBJS = draw.o Screen.o Line.o Box.o Text.o TextBox.o
HEAD = Screen.h Line.h ScreenElement.h Box.h Text.h TextBox.h


## targets and prerequisities 
$(PRJ): $(OBJS)
	$(CC) $(OBJS) -o $(PRJ)

#rule for compiling -cc to .o

%.o: %.cc
	$(CC) -c $(CCFLAGS) $<


## generate the prerequistes and append to the desired file
.prereq : $(OBJS:.o=.cc) $(wildcard *.h) Makefile
	rm -f .prereq
	$(CC) $(CCFLAGS) -MM $(OBJS:.o=.cc)>> ./.prereq

##include the generated prerequisite file
include .prereq

.PHONY: clean
clean :
	rm -f *.o
	rm -f *~ *% *# .#*

.PHONY: clean-all
clean-all :
	rm -f draw
