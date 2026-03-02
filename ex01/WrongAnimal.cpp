#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Default";
	std::cout<< "Default constructor WrongAnimal called"<<std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout<< "String constructor WrongAnimal called"<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wrong_animal)
{
	*this = wrong_animal;
	std::cout<< "Copy constructor WrongAnimal called"<<std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &wrong_animal)
{
	std::cout<< "Copy assignment WrongAnimal called"<<std::endl;
	if (this != &wrong_animal)
	{
		this->type = wrong_animal.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout<< "Destructor WrongAnimal called"<<std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout<< "MakeSound WrongAnimal called"<<std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}
