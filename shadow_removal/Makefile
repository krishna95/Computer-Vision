all: shadow
shadow: src/test.cpp src/shadowRemoval.cpp
	g++ $^ `pkg-config --cflags --libs opencv` -o $@ -Wall
