a = minimal_fighter

all: $a_main.cc
	g++ -o $a $a_main.cc $a.cc

clean:
	rm $a

submit:
	git add .
	git commit -m "hw6-3"
	git push origin master
