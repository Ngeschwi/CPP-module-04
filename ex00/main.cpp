#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	 main()
{
	const Animal* meta =  new Animal();
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();

	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;

	cat->makeSound();
	dog->makeSound();
	meta->makeSound();

	delete meta;
	delete cat;
	delete dog;
	
	return 0;
}
