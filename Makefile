CXX=clang++
CXX_FLAGS=-std=c++20 -g -O0 -Wall -Wextra -Werror -Iincludes/

exec: bin/exec

bin/exec: driver.h utilities.cpp dijkstras.cpp RoadNetwork.cpp RoadNetwork.h utilities.h pagerank.cpp pagerank.h
	${CXX} ${CXX_FLAGS} driver.h utilities.h dijkstras.h RoadNetwork.h pagerank.h -o bin/exec

.DEFAULT_GOAL := exec
.PHONY: clean exec

clean:
	rm -rf bin/*
