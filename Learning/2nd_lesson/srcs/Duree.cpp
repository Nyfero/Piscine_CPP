#include "../class/Duree.hpp"
 
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
		return (true);
	if (a.m_minutes < m_minutes)
		return (true);
	if (a.m_secondes < m_secondes)
		return (true);
	return (false);
}

bool	Duree::operator==(Duree const& b) const
{ return (this->estEgal(b)); }

bool	Duree::operator>(Duree const& b) const
{ return (this->estSupp(b)); }

bool	Duree::operator<(Duree const& b) const
{ return (this->estInf(b)); }

bool	Duree::operator<=(Duree const& b) const
{ return (this->estInf(b) || this->estEgal(b)); }

bool	Duree::operator>=(Duree const& b) const
{ return (this->estSupp(b) || this->estEgal(b)); }

Duree	Duree::operator+(Duree const& b) const
{
	Duree	tmp(m_heures, m_minutes, m_secondes);
	
	tmp.m_secondes += b.m_secondes;
	tmp.m_minutes += tmp.m_secondes / 60;
	tmp.m_secondes = tmp.m_secondes % 60;
	tmp.m_minutes += b.m_minutes;
	tmp.m_heures += tmp.m_minutes / 60;
	tmp.m_minutes = tmp.m_minutes % 60;
	tmp.m_heures += b.m_heures;
	return (tmp);
}
