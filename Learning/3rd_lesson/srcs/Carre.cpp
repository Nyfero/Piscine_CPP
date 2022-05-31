# include "../class/Carre.hpp"

Carre::Carre(int a_longueur): m_longueur(a_longueur)
{}

void	Carre::afficher() const
{ std::cout << "I'm a Carre" << std::endl; }

int		Carre::perimetre()
{ return (m_longueur * 4); }

int		Carre::aire()
{ return (m_longueur * m_longueur); }
