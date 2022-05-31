#ifndef TRIANGLE_HPP
# define TRIANGLE_HPP

# include "Figure.hpp"
# include <string>
# include <iostream>

class Triangle : public Figure
{
	private:
		int	m_base;
		int	m_hauteur;

	public:
		Triangle(int a_base, int a_hauteur);
		virtual void	afficher() const;
		virtual int		perimetre();
		virtual int		aire();
};

#endif
