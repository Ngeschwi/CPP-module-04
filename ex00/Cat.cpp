#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default constructor Cat called" << std::endl;
	this->type = "Cat";
	return ;
}

Cat::Cat(Cat const & src)
{
	*this = src;
	return ;
}

Cat &	Cat::operator=(Cat const & rhs)
{
	if (this != &rhs)
		this->type = "Cat";
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}