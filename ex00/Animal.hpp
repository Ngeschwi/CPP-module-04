#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
	protected:
		std::string	type;
	
	public:
		Animal(void);
		Animal(Animal const & src);
		~Animal(void);

		Animal &	operator=(Animal const & rhs);

		std::string	getType(void) const;
		void	makeSound(void) const;
};

#endif