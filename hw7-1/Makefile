a = sorted_array
b = integer_set

all: $a_main.cc
	g++ -std=c++11 -o $a $a_main.cc $a.cc
	g++ -o $b $b_main.cc $b.cc

clear:
	rm $a $b

submit:
	git add .
	git commit -m "hw7-1"
	git push origin master
