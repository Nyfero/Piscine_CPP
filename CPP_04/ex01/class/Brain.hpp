#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class	Brain
{
	protected:
		std::string	m_ideas[100];

	public:
		//Orthodox Canonical Form
		Brain();
		virtual ~Brain();
		Brain(Brain const& src);
		Brain & operator=(Brain const& src);
		
		//Functions
		void	set3Ideas(std::string a_1, std::string a_2, std::string a_3);
		void	printIdeas();
		
};

#endif
