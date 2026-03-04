#include "Brain.hpp"

Brain::Brain()
{
    std::cout<< "Default constructor Brain called"<<std::endl;
}

Brain::Brain(std::string brain)
{
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
    if (this != source)
    {
        while(i <= 99)
        {
            this->ideas[i] = source.ideas[i];
            i++;
        }
    }
    return *this;
}

Brain::~Brain()
{
    std::cout<< "Destructor Brain called"<<std::endl;
}