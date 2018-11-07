a = draw_shape

all: $a_main.cc
	g++ -std=c++11 -o $a $a_main.cc $a.cc

clean:
	rm $a

submit:
	git add .
	git commit -m "hw8-2"
	git push origin master

