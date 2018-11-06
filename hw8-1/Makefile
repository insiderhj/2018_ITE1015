a = number
b = rectangle

all: $a_main.cc $b_main.cc
	g++ -std=c++11 -o $a $a_main.cc $a.cc
	g++ -std=c++11 -o $b $b_main.cc $b.cc

clean:
	rm $a $b

submit:
	git add .
	git commit -m "hw8-1"
	git push origin master
