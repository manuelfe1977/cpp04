#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &materia)
{
	this->type = materia.type;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	(void) target;
}

AMateria::~AMateria()
{}
