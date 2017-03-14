main: zoo_driver.o animal.o animal_list.o cage.o cell.o facility.o habitat.o location.o zoo.o
	g++ zoo_driver.o animal.o animal_list.o cage.o cell.o facility.o habitat.o location.o zoo.o renderable.h -o main -std=c++11

zoo_driver.o: zoo_driver.cpp
	g++ -c zoo_driver.cpp -o zoo_driver.o

animal.o : animal.cpp
	g++ -c animal.cpp -o animal.o

animal_list.o : animal_list.cpp
	g++ -c animal_list.cpp -o animal_list.o

cage.o : cage.cpp
	g++ -c cage.cpp -o cage.o

cell.o : cell.cpp
	g++ -c cell.cpp -o cell.o

facility.o : facility.cpp
	g++ -c facility.cpp -o facility.o

habitat.o : habitat.cpp
	g++ -c habitat.cpp -o habitat.o

location.o : location.cpp
	g++ -c location.cpp -o location.o

zoo.o : zoo.cpp
	g++ -c zoo.cpp -o zoo.o

clean:
	rm -f *.o main
