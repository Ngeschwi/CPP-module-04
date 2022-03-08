#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void)
{
	std::cout << "Default constructor Dog called" << std::endl;
	this->type = "Dog";
	this->Brain = new class Brain();
	return ;
}

Dog::Dog(Dog const & src)
{
	*this = src;
	return ;
}

Dog &	Dog::operator=(Dog const & rhs)
{
	int	i = 0;

	if (this != &rhs)
		this->type = rhs.getType();
	while (i < 100)
	{
		this->Brain->setIdeas(rhs.Brain->getIdeas(i), i);
		i++;
	}
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaf !" << std::endl;
	return ;
}

Brain*	Dog::getBrain(void) const
{
	return this->Brain;
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog called" << std::endl;
	delete this->Brain;
	return ;
}