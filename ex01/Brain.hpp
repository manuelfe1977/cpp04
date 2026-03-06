#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
private:
	std::string ideas[100];
public:
	Brain();
	Brain(std::string brain);
	Brain(const Brain &source);
	Brain &operator=(const Brain &source);
	void	setIdea(unsigned int index, std:: string);
	std::string getIdea(unsigned int index);
	~Brain();
};

#endif
