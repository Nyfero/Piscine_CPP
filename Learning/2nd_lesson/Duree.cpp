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

bool	Duree::estEgal(Duree const& a) const
{ return (a.m_heures == m_heures && a.m_minutes == m_minutes && a.m_secondes == m_secondes); }

bool	Duree::estInf(Duree const& a) const
{
	if (a.m_heures > m_heures)
		return (false);
	if (a.m_minutes > m_minutes)
		return (false);
	if (a.m_secondes >= m_secondes)
		return (false);
	return (true);
}

bool	Duree::estSupp(Duree const& a) const
{
	if (a.m_heures < m_heures)
		return (false);
	if (a.m_minutes < m_minutes)
		return (false);
	if (a.m_secondes <= m_secondes)
		return (false);
	return (true);
}

bool	operator==(Duree const& a, Duree const& b)
{ return (a.estEgal(b)); }

bool	operator>(Duree const& a, Duree const& b)
{ return (a.estSupp(b)); }

bool	operator<(Duree const& a, Duree const& b)
{ return (a.estInf(b)); }

bool	operator<=(Duree const& a, Duree const& b)
{ return (a.estInf(b) || a.estEgal(b)); }

bool	operator>=(Duree const& a, Duree const& b)
{ return (a.estSupp(b) || a.estEgal(b)); }

Duree	operator+(Duree const& a, Duree const& b)
{
	Duree	tmp()
}
