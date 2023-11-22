EXE=learning_network.exe
CPP=simulation.cpp main.cpp
HPP=simulation.hpp parameters.hpp

CXX=g++
CXXFLAGS=-Wall -std=c++17 -O3

$(EXE) : $(CPP) 
	$(CXX) $(CXXFLAGS) -o $@ $^ 

clean :
	rm -rf $(EXE)
