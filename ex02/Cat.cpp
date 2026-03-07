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
	this->_brain = new Brain();
	*this->_brain = *cat._brain;
}

Cat	&Cat::operator=(const Cat &cat)
{
	if (this != &cat)
	{
		std::cout<< "Assignment constructor Cat called"<<std::endl;
		Animal::operator=(cat);
		delete this->_brain;
		this->_brain = new Brain();
		*this->_brain = *cat._brain;
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout<< "Cat miauuuu"<<std::endl;
}

void	Cat::setIdea(unsigned int index, std::string idea)
{
	this->_brain->setIdea(index,idea);
}

std::string	Cat::getIdeas(unsigned int index)
{
	return this->_brain->getIdea(index);
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout<< "Destructor Cat called"<<std::endl;
}
