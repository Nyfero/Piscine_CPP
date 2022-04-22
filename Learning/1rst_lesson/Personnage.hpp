#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP

#include <string>
#include "Arme.hpp"

class Personnage
{
	public:
		Personnage();
		~Personnage();
		Personnage(std::string nomArme, int degatsArme);
		void	recevoirDegats(int nbDegats);
		void	changerArme(std::string nom, int degats);
		void	attaquer(Personnage &cible);
		void	boirePotionDeVie(int quantitePotion);
		void	afficherEtat() const;
		bool	estVivant() const;

	private:
		int		m_vie;
		int		m_mana;
		Arme	m_arme;
};

#endif
