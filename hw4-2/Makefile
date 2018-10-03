a = my_list
b = linked_list

all: $a.o
	g++ -o $a $a.o $b.cc

$a.o: $a.cc
	g++ -c -o $a.o $a.cc

clean:
	rm $a $a.o

submit:
	git add .
	git commit -m "hw4-2"
	git push origin master
