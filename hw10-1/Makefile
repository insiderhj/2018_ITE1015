a = class_function
b = cast_quiz
c = dynamic_cast
d = shapes

all: $a_main.cc $b.cc
	g++ -std=c++11 -o $a $a_main.cc $a.cc
	g++ -std=c++11 -o $b $b.cc
	g++ -std=c++11 -o $c $c_main.cc
	g++ -std=c++11 -o $d $d_main.cc $d.cc

clean:
	rm $a $b $c $d

submit:
	git add .
	git commit -m "hw10-1"
	git push origin master
