#ifndef DOG_HPP
# define DOG_HPP

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog condt & src);
		~Dog(void);

		Dog &	operator=(Dog const & rhs);
};

#endif