#include "Cat.hpp"

Cat::Cat():Animal()
{
	std::cout<< "Default constructor Cat called"<<std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(std::string type):Animal(type)
{
	std::cout<< "String constructor Cat called"<<std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &cat):Animal(cat)
{
	std::cout<< "Copy constructor Cat called"<<std::endl;
	this->type = "Cat";
}

Cat	&Cat::operator=(const Cat &cat)
{
	std::cout<< "Assignment constructor Cat called"<<std::endl;
	Animal::operator=(cat);
	this->type = "Cat";
	return *this;
}

void Cat::makeSound() const
{
	std::cout<< "Cat miauuuu"<<std::endl;
}

void	Cat::setIdea()

Cat::~Cat()
{
	std::cout<< "Destructor Cat called"<<std::endl;
}
