all: get_sum_diff.o to_lower_upper.o
	g++ -o get_sum_diff get_sum_diff.o
	g++ -o to_lower_upper to_lower_upper.o

get_sum_diff.o: get_sum_diff.cc
	g++ -c -o get_sum_diff.o get_sum_diff.cc

to_lower_upper.o: to_lower_upper.cc
	g++ -c -o to_lower_upper.o to_lower_upper.cc

clean:
	rm get_sum_diff.o get_sum_diff to_lower_upper.o to_lower_upper
