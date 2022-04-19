
CXX=clang++
INCLUDES=-Iincludes/ -Ilib/
CXXEXTRAS=-Wall -Wextra -Werror -pedantic
CXXFLAGS=-std=c++20 -g -fstandalone-debug

exec: bin/exec
tests: bin/tests

bin/exec: src/driver.cc src/utilities.cc src/dijkstras.cc src/roadNetwork.cc src/pagerank.cc
	${CXX} ${CXX_FLAGS} $(CXXEXTRAS) $(INCLUDES) $^ -o $@

bin/tests: tests/tests.cc obj/catch.o src/utilities.cc src/dijkstras.cc src/roadNetwork.cc src/pagerank.cc
	$(CXX) $(CXXFLAGS) $(INCLUDES) $^ -o $@

obj/catch.o: tests/catch.cc
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $^ -o $@

.DEFAULT_GOAL := exec
.PHONY: clean exec tests

clean:
	rm -rf bin/* obj/*

