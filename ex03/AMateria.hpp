#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <stdio.h>
# include <stdlib.h>
# include <iostream>
# include <iomanip>

class AMateria
{
	protected:

	public:
		AMateria(std::string const & type);

		std::string const & getType() const;
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
}

#endif