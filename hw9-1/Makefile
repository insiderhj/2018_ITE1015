a = classes
b = print_info
c = print_member

all: $a_main.cc $b_main.cc
	g++ -std=c++11 -o $a $a_main.cc $a.cc
	g++ -std=c++11 -o $b $b_main.cc $b.cc
	g++ -std=c++11 -o $c $c_main.cc $c.cc

clean:
	rm $a $b $c

submit:
	git add .
	git commit -m "hw9-1"
	git push origin master
