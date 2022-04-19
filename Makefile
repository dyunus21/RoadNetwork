# CXX=clang++
# CXX_FLAGS=-std=c++20 -g -O0 -Wall -Wextra -Werror -Iincludes/

# exec: bin/exec

# bin/exec: driver.hpp utilities.cc dijkstras.cc roadnetwork.cc roadnetwork.hpp utilities.hpp pagerank.cc
# 	${CXX} ${CXX_FLAGS} -o bin/exec

# .DEFAULT_GOAL := exec
# .PHONY: clean exec

# clean:
# 	rm -rf bin/*

CXX=clang++
INCLUDES=-Iincludes/ -Ilib/
CXXEXTRAS=-Wall -Wextra -Werror -pedantic
CXXFLAGS=-std=c++20 -g -fstandalone-debug

exec: bin/exec
# tests: bin/tests

bin/exec: src/driver.cc src/utilities.cc src/dijkstras.cc src/roadnetwork.cc src/pagerank.cc
	${CXX} ${CXX_FLAGS} $(CXXEXTRAS) $(INCLUDES) $^ -o $@

# bin/exec: ./src/driver.cc ./src/cord.cc ./src/cord-utilities.cc
# 	$(CXX) $(CXXFLAGS) $(CXXEXTRAS) $(INCLUDES) $^ -o $@

# bin/tests: ./tests/tests.cc obj/catch.o ./src/cord.cc ./src/cord-utilities.cc
# 	$(CXX) $(CXXFLAGS) $(INCLUDES) $^ -o $@

# obj/catch.o: tests/catch.cc
# 	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $^ -o $@

.DEFAULT_GOAL := exec
.PHONY: clean exec tests

clean:
	rm -rf bin/* obj/*

