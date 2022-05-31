#ifndef CARRE_HPP
# define CARRE_HPP

# include "Figure.hpp"
# include <string>
# include <iostream>

class Carre : public Figure
{
	private:
		int	m_longueur;

	public:
		Carre(int a_longueur);
		virtual void	afficher() const;
		int		perimetre();
		int		aire();
};

#endif
