#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Default constructor animal called" << std::endl;
	return ;
}

Animal::Animal(Animal const & src)
{
	*this = src;
	return ;
}

Animal &	Animal::operator=(Animal const & rhs)
{
	return *this;
}

std::string	Animal::getType(void) const
{
	return this->type;
}

void	Animal::makeSound(void) const
{
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Destructor Animal called" << std::endl;
	return ;
}