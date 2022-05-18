#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class	Brain
{
	public:
		Brain();
		virtual ~Brain();
		Brain(Brain const& src);
		Brain & operator=(Brain const& src);
		
	private:
		std::string	m_ideas[100];
};

#endif
