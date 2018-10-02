a = string
b = function_overloading
c = circle_main
d = dynamic_array

all: $a.o $b.o $c.o $d.o
	g++ -o $a $a.o
	g++ -o $b $b.o
	g++ -o $c $c.o circle.cc
	g++ -o $d $d.o

$a.o: $a.cc
	g++ -c -o $a.o $a.cc

$b.o: $b.cc
	g++ -c -o $b.o $b.cc

$c.o: $c.cc
	g++ -c -o $c.o $c.cc

$d.o: $d.cc
	g++ -c -o $d.o $d.cc

clean:
	rm $a $a.o $b $b.o $c $c.o $d $d.o

submit:
	git add .
	git commit -m "hw4-1"
	git push origin master
