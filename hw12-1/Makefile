a = myswap
b = my_vector

all: $a.cc $b_main.cc
	g++ -std=c++11 -o $a $a.cc
	g++ -std=c++11 -o $b $b_main.cc

clean:
	rm $a $b

submit:
	git add .
	git commit -m "hw12-1"
	git push origin master
