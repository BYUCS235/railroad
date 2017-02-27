CFLAGS=-std=c++11 -g
station: Station.cpp main.cpp Station.h StationInterface.h mystack.h mystack.cpp
	g++ $(CFLAGS) Station.cpp main.cpp mystack.cpp -o station