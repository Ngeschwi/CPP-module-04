#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	 main()
{
	const Animal* animal[4];
	animal[0] = new Cat();
	animal[1] = new Cat();
	animal[2] = new Dog();
	animal[3] = new Dog();

	animal[0]->makeSound();
	animal[1]->makeSound();
	animal[2]->makeSound();
	animal[3]->makeSound();

	// std::cout << "idea n°50, animal n°1 : " << animal[0]->Brain->getIdeas(50) << std::endl;
	// std::cout << "idea n°50, animal n°2 : " << animal[1]->Brain->getIdeas(50) << std::endl;
	// animal[0]->Brain->setIdeas("salut", 50);
	// std::cout << "idea n°50, animal n°1 : " << animal[0]->Brain->getIdeas(50) << std::endl;
	// std::cout << "idea n°50, animal n°2 : " << animal[1]->Brain->getIdeas(50) << std::endl;

	delete animal[0];
	delete animal[1];
	delete animal[2];
	delete animal[4];
	
	return 0;
}