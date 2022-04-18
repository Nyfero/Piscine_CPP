#include "Arme.hpp"
#include <string>
#include <iostream>

Arme::Arme()
{
	m_nom = "Epee rouillee";
	m_degats = 10;
}

Arme::Arme(std::string nom, int degats)
{
	m_nom = nom;
	m_degats = degats;
}

void Arme::changer(std::string nom, int degats)
{
	m_nom = nom;
	m_degats = degats;
}

void Arme::afficher() const
{
	std::cout << m_nom << " : " << m_degats << " dmg" << std::endl;
}

int	Arme::get_degats() const
{
	return (m_degats);
} 
