# Made by Morgan Legare
CXX = g++
CXXFLAGS = -Wall -g

help:
	@printf "\n[===================================================]\n"
	@printf "[ MAKE COMMANDS:                                    ]\n"
	@printf "[===================================================]\n"
	@printf "[ make            | opens this help menu            ]\n"
	@printf "[ make clean      | deletes a.out                   ]\n"
	@printf "[ make build      | compiles and runs the program   ]\n"
	@printf "[ make cleanbuild | clean+build                     ]\n"
	@printf "[ make edit       | opens every program file in vim ]\n"
	@printf "[ make git        | displays git work flow          ]\n"
	@printf "[ make ls         | lists out program files         ]\n"
	@printf "[===================================================]\n\n"


clean:
	rm -f a.out

build:
	clear
	$(CXX) $(CXXFLAGS) *.cpp
	./a.out

cleanbuild:
	clear
	rm a.out
	$(CXX) $(CXXFLAGS) *.cpp
	./a.out

edit:
	vim -p main.cpp journal.cpp main.h journal.h

git:
	clear
	cat gitwf

ls:
	clear
	ls -l -a -h

