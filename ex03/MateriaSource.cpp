#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	int	i = 0;

	while (i < 4)
	{
		this->_resources[i] = NULL;
		i++;
	}
}

MateriaSource::MateriaSource(const MateriaSource &materia)
{
	int	i = 0;

	while (i < 4)
	{
		if (materia._resources[i] != NULL)
			this->_resources[i] = materia._resources[i]->clone();
		i++;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &materia)
{
	int	i = 0;

	if (this != &materia)
	{
		while (i < 4)
		{
			if (this->_resources[i] != NULL)
				delete this->_resources[i];
			i++;
		}
		i = 0;
		while (i < 4)
		{
			if (materia._resources[i] != NULL)
				this->_resources[i] = materia._resources[i]->clone();
			i++;
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	int	i = 0;

	while (i < 4)
	{
		if (this->_resources[i] != NULL)
			delete this->_resources[i];
		i++;
	}
}

void MateriaSource::learnMateria(AMateria* m)
{
	int	i = 0;

	while (i < 4)
	{
		if (this->_resources[i] != NULL)
			this->_resources[i] = m;
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	int	i = 0;

	while (i < 4)
	{
		if (this->_resources[i]->getType() == type)
			return this->_resources[i]->clone();
		i++;
	}
	return NULL;
}
