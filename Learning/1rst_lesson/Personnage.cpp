#include "Personnage.hpp"
#include <string>
#include <iostream>

void	Personnage::recevoirDegats(int nbDegats)
{
	m_vie -= nbDegats;
	if (m_vie < 0)
		m_vie = 0;
}

void	Personnage::attaquer(Personnage &cible)
{
	cible.recevoirDegats(m_arme.get_degats());
}

void	Personnage::boirePotionDeVie(int quantitePotion)
{
	m_vie += quantitePotion;
	if (m_vie > 100)
		m_vie = 100;
}

void	Personnage::changerArme(std::string nom, int degats)
{
	m_arme.changer(nom, degats);
}

void	Personnage::afficherEtat() const
{
	std::cout << "vie :" << m_vie << std::endl;
	std::cout << "mana :" << m_mana << std::endl;
	m_arme.afficher();
}

bool	Personnage::estVivant() const
{
	return (m_vie > 0);
}

Personnage::Personnage(): m_arme()
{
	m_vie = 100;
	m_mana = 100;
	
}

Personnage::Personnage(std::string nomArme, int degatsArme): m_arme(nomArme, degatsArme)
{
	m_vie = 100;
	m_mana = 100;
}

Personnage::~Personnage()
{}
