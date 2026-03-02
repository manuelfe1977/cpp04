#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void){

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Dog *d = new Dog();
	const Cat *c = new Cat();
	const Animal *a = new Cat();
	const WrongAnimal *w = new WrongAnimal();
	const WrongAnimal *wc = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << a->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	a->makeSound();
	meta->makeSound();
	std::cout << d->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	c->makeSound();
	d->makeSound();
	std::cout << w->getType() << " " << std::endl;
	std::cout << wc->getType() << " " << std::endl;
	w->makeSound();
	wc->makeSound();
	delete meta;
	delete j;
	delete i;
	delete d;
	delete c;
	delete w;
	delete wc;
	delete a;
	return (0);
}

