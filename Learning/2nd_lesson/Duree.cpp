#include "Duree.hpp"
 
Duree::Duree(int heures, int minutes, int secondes)
{
	while (secondes >= 60)
	{
		minutes++;
		secondes -= 60;
	}
	m_secondes = secondes;
	while (minutes >= 60)
	{
		heures++;
		minutes -= 60;
	}
	m_minutes = minutes;
	m_heures = heures;
}

void	Duree::afficherHeure(void) const
{
	std::cout << m_heures << " heure, " << m_minutes << " minutes, " << m_secondes << " secondes" << std::endl;
}
