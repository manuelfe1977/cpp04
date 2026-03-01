#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "Default";
	std::cout<< "Default constructor Animal called"<<std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout<< "String constructor Animal called"<<std::endl;
}

Animal::Animal(const Animal &animal)
{
	*this = animal;
	std::cout<< "Copy constructor Animal called"<<std::endl;
}

Animal::operator=(const Animal &animal)
{
	std::cout<< "Copy assignment Animal called"<<std::endl;
	if (this != &animal)
	{
		this->type = animal.type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout<< "Destructor Animal called"<<std::endl;
}

void Animal::makeSound()
{
	std::cout<< "MakeSound Animal called"<<std::endl;
}

