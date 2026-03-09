#include "Ice.hpp"
#include "ICharacter.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{}
Ice::Ice(const Ice &ice) : AMateria(ice.type)
{}

Ice &Ice::operator=(const Ice& ice)
{
	if (this != &ice)
		type = ice.type;
	return *this;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
}
