all: min_max_sum.o rotate_integer.o
	g++ -o min_max_sum min_max_sum.o
	g++ -o rotate_integer rotate_integer.o

min_max_sum.o: min_max_sum.cc
	g++ -c -o min_max_sum.o min_max_sum.cc

rotate_integer.o: rotate_integer.cc
	g++ -c -o rotate_integer.o rotate_integer.cc

clean:
	rm min_max_sum rotate_integer
