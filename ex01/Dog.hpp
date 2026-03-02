#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include "Animal.hpp"

class Dog : public Animal
{
private:

public:
	Dog();
	Dog(std::string type);
	Dog(const Dog &dog);
	Dog &operator=(const Dog &dog);
	void	makeSound() const;
	~Dog();
};

#endif
