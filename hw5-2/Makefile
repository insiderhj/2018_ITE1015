all: magic_square_main.o
	g++ -o magic_square magic_square_main.o magic_square.cc

magic.o:
	g++ -c -o magic_square_main.o  magic_square_main.cc

clean:
	rm magic_square magic_square_main.o

submit:
	git add .
	git commit -m "hw5-2"
	git push origin master
