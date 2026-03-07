#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *_brain;
public:
	Dog();
	Dog(std::string type);
	Dog(const Dog &dog);
	Dog &operator=(const Dog &dog);
	void	makeSound() const;
	void	setIdea(unsigned int index, std::string idea);
	std::string	getIdeas(unsigned int index);
	~Dog();
};

#endif
