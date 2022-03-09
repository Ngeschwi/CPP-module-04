#ifndef BRAIN_HPP
# define BRAIN_HPP

# include "Animal.hpp"

class Brain
{
	private:
		std::string _ideas[100];

	public:
		Brain(void);
		Brain(Brain const & src);
		~Brain(void);

		Brain &	operator=(Brain const & rhs);

		void		setBrain(std::string idea);
		void		setIdeas(std::string idea, int index);
		std::string	getIdeas(int index) const;
};

#endif