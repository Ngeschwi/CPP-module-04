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

	// std::cout << "idea n°50, animal n°1 : " << animal[0]->Brain->getIdeas(50) << std::endl;
	// std::cout << "idea n°50, animal n°2 : " << animal[1]->Brain->getIdeas(50) << std::endl;
	// animal[0]->Brain->setIdeas("salut", 50);
	// std::cout << "idea n°50, animal n°1 : " << animal[0]->Brain->getIdeas(50) << std::endl;
	// std::cout << "idea n°50, animal n°2 : " << animal[1]->Brain->getIdeas(50) << std::endl;

	for (size_t i = 0; i < nbr; i++)
	{
		delete animal[i];
	}
	
	return 0;
}