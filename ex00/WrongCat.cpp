#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "Default constructor WrongCat called" << std::endl;
	this->type = "WrongCat";
	return ;
}

WrongCat::WrongCat(WrongCat const & src)
{
	*this = src;
	return ;
}

WrongCat &	WrongCat::operator=(WrongCat const & rhs)
{
	if (this != &rhs)
		this->type = "WrongCat";
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miaou !" << std::endl;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}