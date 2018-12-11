a = bad_allocation
b = object_copy
c = chained_handler

all: $a.cc $b.cc $c.cc
	g++ -std=c++11 -o $a $a.cc
	g++ -std=c++11 -o $b $b.cc
	g++ -std=c++11 -o $c $c.cc

clean:
	rm $a $b $c

submit:
	git add .
	git commit -m "hw13-1"
	git push origin master
