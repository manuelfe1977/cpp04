#include "Character.hpp"
#include "AMateria.hpp"

Character::Character()
{
	int	i = 0;
	this->_name = "Default";
	while (i < 4)
	{
		this->_inventory[i] = NULL;
		i++;
	}
	std::cout << "Default constructor Character called" << std::endl;
}

Character::Character(std::string name)
{
	int	i = 0;
	this->_name = name;
	while (i < 4)
	{
		this->_inventory[i] = NULL;
		i++;
	}
	std::cout << "String constructor Character called" << std::endl;
}

Character::Character(const Character &character)
{
	int	i = 0;
	this->_name = character._name;
	while (i < 4)
	{
		this->_inventory[i] = NULL;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (character._inventory[i] != NULL)
			this->_inventory[i] = character._inventory[i]->clone();
		i++;
	}
	std::cout << "Copy constructor Character called" << std::endl;
}

Character& Character::operator=(const Character &character)
{
	int i = 0;
	if (this != &character)
	{
		this->_name = character._name;
		while (i < 4)
		{
			delete this->_inventory[i];
			i++;
		}
		i = 0;
		while (i < 4)
		{
			if (character._inventory[i] != NULL)
				this->_inventory[i] = character._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
			i++;
		}
	}
	std::cout << "Constructor assignament Character called" << std::endl;
	return *this;
}

Character::~Character()
{
	int	i = 0;
	while (i < 4)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
		i++;
	}
}
