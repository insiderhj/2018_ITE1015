all: struct_person.o array_struct_person.o
	g++ -o struct_person struct_person.o
	g++ -o array_struct_person array_struct_person.o

struct_person.o: struct_person.cc
	g++ -c -o struct_person.o struct_person.cc

array_struct_person.o: array_struct_person.cc
	g++ -c -o array_struct_person.o array_struct_person.cc

clean:
	rm struct_person struct_person.o array_struct_person array_struct_person.o
