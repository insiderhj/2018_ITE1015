#ifndef __ANIMALS_H__
#define __ANIMALS_H__

#include <string>

class Animal {
protected:
	std::string name;
	int age;
public:
	Animal(std::string _name, int _age) : name(_name), age(_age) {}
	virtual void printInfo() {}
};

class Zebra : public Animal {
	int numStripes;
public:
	Zebra(std::string _name, int _age, int _numStripes) : Animal(_name, _age), numStripes(_numStripes) {}
	void printInfo();
};

class Cat : public Animal {
	std::string favoriteToy;
public:
	Cat(std::string _name, int _age, std::string _favoriteToy) : Animal(_name, _age), favoriteToy(_favoriteToy) {}
	void printInfo();
};

#endif
