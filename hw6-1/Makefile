a = simple_shape
b = simple_account

all: $a_main.cc $b_main.cc
	g++ -o $a $a_main.cc $a.cc
	g++ -o $b $b_main.cc $b.cc

clear:
	rm $a $b

submit:
	git add .
	git commit -m "hw6-1"
	git push origin master
