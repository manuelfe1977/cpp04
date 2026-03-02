#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal()
{
	this->type = "WrongCat";
}

WrongCat::WrongCat(std::string type):WrongAnimal(type)
{
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &wrong_cat):WrongAnimal(wrong_cat)
{
	this->type = "WrongCat";
}

WrongCat &WrongCat::operator=(const WrongCat &wrong_cat)
{
	WrongAnimal::operator=(wrong_cat);
	this->type = "WrongCat";
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout<< "WrongCat pio"<<std::endl;
}

WrongCat::~WrongCat()
{
	std::cout<< "Destructor WrongCat called"<<std::endl;
}
