# include "../class/Cercle.hpp"

Cercle::Cercle(int a_rayon): m_rayon(a_rayon)
{}

void	Cercle::afficher() const
{ std::cout << "I'm a Cercle" << std::endl; }

int		Cercle::perimetre()
{ return ((m_rayon * 2) * 3.1415); }

int		Cercle::aire()
{ return (m_rayon * m_rayon * 3.1415); }
