a = simple_int_set
b = message_book

all: $a_main.cc $b_main.cc
	g++ -std=c++11 -o $a $a_main.cc $a.cc
	g++ -std=c++11 -o $b $b_main.cc $b.cc

clear:
	rm $a $b

submit:
	git add .
	git commit -m "hw7-2"
	git push origin master
