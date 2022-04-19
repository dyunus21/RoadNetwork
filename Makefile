CXX=clang++
CXX_FLAGS=-std=c++20 -g -O0 -Wall -Wextra -Werror -Iincludes/

exec: bin/exec

bin/exec: driver.cc utilities.cpp dijkstras.cpp RoadNetwork.cpp RoadNetwork.cc utilities.cc
	${CXX} ${CXX_FLAGS} driver.cc utilities.cc dijkstras.cc RoadNetwork.cc-o bin/exec

.DEFAULT_GOAL := exec
.PHONY: clean exec

clean:
	rm -rf bin/*
