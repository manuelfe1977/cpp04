#include "Brain.hpp"

Brain::Brain()
{
    std::cout<< "Default constructor Brain called"<<std::endl;
}

Brain::Brain(std::string brain)
{
	(void)brain;
    std::cout<< "String constructor Brain called"<<std::endl;
}

Brain::Brain(const Brain &source)
{
    int i = 0;
    std::cout<< "Copy constructor Brain called"<<std::endl;
    while(i <= 99)
    {
        this->ideas[i] = source.ideas[i];
        i++;
    }
}

Brain &Brain::operator=(const Brain &source)
{
    int i = 0;
    std::cout<< "Assingment constructor Brain called"<<std::endl;
    if (this != &source)
    {
        while(i <= 99)
        {
            this->ideas[i] = source.ideas[i];
            i++;
        }
    }
    return *this;
}

void	Brain::setIdea(unsigned int index, std::string idea)
{
	if (index <= 99)
	{
		this->ideas[index] = idea;
	}
}

std::string	Brain::getIdea(unsigned int index)
{
	if (index <= 99)
	{
		return (this->ideas[index]);
	}
	else
		return "";
}

Brain::~Brain()
{
    std::cout<< "Destructor Brain called"<<std::endl;
}
