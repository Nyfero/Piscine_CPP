#ifndef ARME_HPP
#define ARME_HPP

#include <string>

class Arme
{
	public:
		Arme();
		Arme(std::string nomArme, int degatsArme);
		void 	changer(std::string nom, int degats);
		void 	afficher() const;
		int		get_degats() const;

	private:
		std::string	m_nom;
		int			m_degats;
};

#endif
