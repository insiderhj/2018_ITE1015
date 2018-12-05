a = simply_linked_list
b = my_shared_ptr

all: $a_main.cc $b_main.cc
	g++ -std=c++11 -o $a $a_main.cc
	g++ -std=c++11 -o $b $b_main.cc

clean:
	rm $a $b

submit:
	git add .
	git commit -m "hw12-2"
	git push origin master
