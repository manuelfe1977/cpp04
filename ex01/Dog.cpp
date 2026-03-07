#include "Dog.hpp"

Dog::Dog():Animal()
{
	std::cout<< "Default constructor Dog called"<<std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(std::string type):Animal(type)
{
	std::cout<< "String constructor Dog called"<<std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &dog):Animal(dog)
{
	std::cout<< "Copy constructor Dog called"<<std::endl;
	this->_brain = new Brain();
	*this->_brain = *dog._brain;
}

Dog	&Dog::operator=(const Dog &dog)
{
	if (this != &dog)
	{
		std::cout<< "Assignment constructor Dog called"<<std::endl;
		Animal::operator=(dog);
		delete this->_brain;
		this->_brain = new Brain();
		*this->_brain = *dog._brain;
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout<< "Dog guau"<<std::endl;
}

void	Dog::setIdea(unsigned int index, std::string idea)
{
	this->_brain->setIdea(index,idea);
}

std::string	Dog::getIdeas(unsigned int index)
{
	return this->_brain->getIdea(index);
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout<< "Destructor Dog called"<<std::endl;
}
