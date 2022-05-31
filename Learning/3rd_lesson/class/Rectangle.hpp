#ifndef RECTANGLE_HPP
# define RECTANGLE_HPP

# include "Figure.hpp"
# include <string>
# include <iostream>

class Rectangle : public Figure
{
	private:
		int	m_longueur;
		int	m_largeur;

	public:
		Rectangle(int a_longueur, int a_largeur);
		virtual void	afficher() const;
		int		perimetre();
		int		aire();
};

#endif
