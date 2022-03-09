#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	 main()
{
	size_t	nbr = 4;

	const Animal* animal[nbr];
	for (size_t i = 0; i < nbr; i++)
	{
		if (i < nbr / 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
	}

	for (size_t i = 0; i < nbr; i++)
	{
		animal[i]->makeSound();
	}

	for (size_t i = 0; i < nbr; i++)
	{
		delete animal[i];
	}
	
	return 0;
}