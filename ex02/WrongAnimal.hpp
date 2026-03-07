#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &wrong_animal);
	WrongAnimal &operator=(const WrongAnimal &wrong_animal);
	std::string getType() const;
	~WrongAnimal();
	void makeSound() const;
};

#endif
