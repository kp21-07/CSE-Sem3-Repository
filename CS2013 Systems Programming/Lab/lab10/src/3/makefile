#TODO: Complete the makefile

# Default case (user-side)
PROJ_HOME ?= $(CURDIR)

# Project specific
NAME := 3
SOURCES_LIST := 3.c
MAKE_FILE := $(CURDIR)/$(lastword $(MAKEFILE_LIST))
OPTS := -Wall -Werror

# targets
all: build

#####################
# Do not edit above #
#####################

# TODO: Edit only in the following parts
# You need to write rules for stack.o, 2.o and build

list.o : list.c
	gcc -Wall -c list.c -o list.o

build : list.o
	gcc -Wall test-list.c list.o -o test-list

#####################
# Do not edit below #
#####################

run: build
	@echo "Running the program\n"
	@$(PROJ_HOME)/$(NAME)

clean:
	rm -f $(NAME) run.log leaks.log *.o test-list
