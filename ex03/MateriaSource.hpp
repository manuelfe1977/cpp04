#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* _resources[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource &materia);
	MateriaSource& operator=(const MateriaSource &materia);
	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const &type);
	~MateriaSource();
};

#endif
