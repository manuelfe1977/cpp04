#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void){

	Animal*	animals[10];
	int	i = 0;

	while (i <= 9)
	{
		if (i >= 5)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
		i++;
	}
	i = 0;
	while (i <= 9)
	{
		animals[i]->makeSound();
		i++;
	}
	i = 0;
	while (i <= 9)
	{
		delete animals[i];
		i++;
	}
	Dog a("perro");
	a.setIdea(0,"comer");
	a.setIdea(1,"dormir");
	a.setIdea(2,"buscar hueso");
	i = 0;
	while (i <= 2)
	{
		std::cout<<a.getType() << " tiene esta idea " << a.getIdeas(i)<<std::endl;
		i++;
	}

	Dog b(a);
	i = 0;
	while (i <= 2)
	{
		std::cout<<b.getType() << " tiene esta idea " << b.getIdeas(i)<<std::endl;
		i++;
	}
	a.setIdea(2, "buscar pescado");
	std::cout<<a.getType() << " tiene esta idea " << a.getIdeas(2)<<std::endl;
	std::cout<<b.getType() << " tiene esta idea " << b.getIdeas(2)<<std::endl;


	Cat c("gato");
	c.setIdea(0,"comer");
	c.setIdea(1,"dormir");
	c.setIdea(2,"buscar pescado");
	i = 0;
	while (i <= 2)
	{
		std::cout<<c.getType() << " tiene esta idea " << c.getIdeas(i)<<std::endl;
		i++;
	}

	Cat cc(c);
	i = 0;
	while (i <= 2)
	{
		std::cout<<cc.getType() << " tiene esta idea " << cc.getIdeas(i)<<std::endl;
		i++;
	}
	c.setIdea(2, "buscar arenero");
	std::cout<<c.getType() << " tiene esta idea " << c.getIdeas(2)<<std::endl;
	std::cout<<cc.getType() << " tiene esta idea " << cc.getIdeas(2)<<std::endl;

	Cat asig;
	asig = c;
	i = 0;
	while (i <= 2)
	{
		std::cout<<asig.getType() << " tiene esta idea " << asig.getIdeas(i)<<std::endl;
		i++;
	}
	c.setIdea(2, "buscar sardinas");
	std::cout<<c.getType() << " tiene esta idea " << c.getIdeas(2)<<std::endl;
	std::cout<<asig.getType() << " tiene esta idea " << asig.getIdeas(2)<<std::endl;

	asig.setIdea(100,"fuera de rango");
	std::cout<<asig.getType() << " tiene esta idea fuera de rango" << asig.getIdeas(100)<<std::endl;

	Dog asig_d;
	asig_d = a;
	i = 0;
	while (i <= 2)
	{
		std::cout<<asig_d.getType() << " tiene esta idea " << asig_d.getIdeas(i)<<std::endl;
		i++;
	}
	a.setIdea(2, "buscar parque");
	std::cout<<a.getType() << " tiene esta idea " << a.getIdeas(2)<<std::endl;
	std::cout<<asig_d.getType() << " tiene esta idea " << asig_d.getIdeas(2)<<std::endl;
	return (0);
}

