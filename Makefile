cars: main.cpp car.o racecar.o tire.o
	g++ -std=c++11 car.o racecar.o tire.o main.cpp -o cars

car.o: car.cpp car.h
	g++ -c -std=c++11 car.cpp

racecar.o: racecar.cpp racecar.h
	g++ -c -std=c++11 racecar.cpp

tire.o: tire.cpp tire.h
	g++ -c -std=c++11 tire.cpp