#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:

public:
	WrongCat();
	WrongCat(std::string type);
	WrongCat(const WrongCat &wrong_cat);
	WrongCat &operator=(const WrongCat &wrong_cat);
	void	makeSound() const;
	~WrongCat();
};

#endif
