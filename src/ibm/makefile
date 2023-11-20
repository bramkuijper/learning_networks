EXE=learning_network.exe
CPP=simulation.cpp main.cpp
HPP=simuation.hpp parameters.hpp

CXX=g++
CXXFLAGS=-Wall -std=c++17 -O3

$(EXE) : $(CPP) $(HPP)
	$(CXX) $(CXXFLAGS) $^ -o $@

clean :
	rm -rf $(EXE)
