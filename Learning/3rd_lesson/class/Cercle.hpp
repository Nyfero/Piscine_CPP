#ifndef CERCLE_HPP
# define CERCLE_HPP

# include "Figure.hpp"
# include <string>
# include <iostream>

class Cercle : public Figure
{
	private:
		int	m_rayon;

	public:
		Cercle(int a_rayon);
		virtual void	afficher() const;
		int		perimetre();
		int		aire();
};

#endif
