# include "../class/Triangle.hpp"

Triangle::Triangle(int a_base, int a_hauteur): m_base(a_base), m_hauteur(a_hauteur)
{}

void	Triangle::afficher() const
{ std::cout << "I'm a Triangle" << std::endl; }

int		Triangle::perimetre()
{ return (m_base * 3); }

int		Triangle::aire()
{ return ((m_base * m_hauteur) / 2); }
