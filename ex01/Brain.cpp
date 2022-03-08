#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default constructor Brain called" << std::endl;
	this->setAllIdeas("hello");
	return ;
}

Brain::Brain(Brain const & src)
{
	*this = src;
	return ;
}

Brain &	Brain::operator=(Brain const & rhs)
{
	int	i = 0;

	if (this != &rhs)
	{
		while (i < 100)
		{
			this->setIdeas(rhs.getIdeas(i), i);
			i++;
		}
	}
	return *this;
}

void	Brain::setAllIdeas(std::string idea)
{
	int	i = 0;
	while (i < 100)
	{
		this->_ideas[i] = idea;
		i++;
	}
	return ;
}

void	Brain::setIdeas(std::string idea, int index)
{
	if (index >= 0 && index < 100)
		this->_ideas[index] = idea;
	return ;
}

std::string	Brain::getIdeas(int index) const
{
	if (index >= 0 && index < 100)
		return this->_ideas[index];
	exit(0);
}

Brain::~Brain(void)
{
	std::cout << "Destructor Brain called" << std::endl;
	return ;
}