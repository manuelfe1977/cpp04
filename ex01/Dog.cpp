#include "Dog.hpp"

Dog::Dog():Animal()
{
	std::cout<< "Default constructor Dog called"<<std::endl;
	this->type = "Dog";
}

Dog::Dog(std::string type):Animal(type)
{
	std::cout<< "String constructor Dog called"<<std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &dog):Animal(dog)
{
	std::cout<< "Copy constructor Dog called"<<std::endl;
	this->type = "Dog";
}

Dog	&Dog::operator=(const Dog &dog)
{
	std::cout<< "Assignment constructor Dog called"<<std::endl;
	Animal::operator=(dog);
	this->type = "Dog";
	return *this;
}

void Dog::makeSound() const
{
	std::cout<< "Dog guau"<<std::endl;
}

Dog::~Dog()
{
	std::cout<< "Destructor Dog called"<<std::endl;
}
