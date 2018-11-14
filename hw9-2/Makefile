a = animals
b = draw_shape

all: $a_main.cc $b_main.cc
	g++ -std=c++11 -o $a $a.cc $a_main.cc
	g++ -std=c++11 -o $b $b.cc $b_main.cc

clean:
	rm $a $b

submit:
	git add .
	git commit -m "hw9-2"
	git push origin master
