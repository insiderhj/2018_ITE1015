a = print_shape
b = clocks
c = clock_time

all: $a_main.cc $c_main.cc
	g++ -std=c++11 -o $a $a_main.cc $a.cc
	g++ -std=c++11 -o $c $c_main.cc $c.cc $b.cc

clean:
	rm $a $c

submit:
	git add .
	git commit -m "hw10-2"
	git push origin master
