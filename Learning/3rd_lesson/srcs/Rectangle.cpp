# include "../class/Rectangle.hpp"

Rectangle::Rectangle(int a_longueur, int a_largeur): m_longueur(a_longueur), m_largeur(a_largeur)
{}

void	Rectangle::afficher() const
{ std::cout << "I'm a Rectangle" << std::endl; }

int		Rectangle::perimetre()
{ return ((m_longueur + m_largeur) * 2); }

int		Rectangle::aire()
{ return (m_longueur * m_largeur); }
