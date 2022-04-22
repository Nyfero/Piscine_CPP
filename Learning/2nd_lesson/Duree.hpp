#ifndef DUREE_HPP
# define DUREE_HPP

# include <string>
# include <iostream>

class Duree
{
	public:
		Duree(int heures = 0, int minutes = 0, int secondes = 0);
		void	afficherHeure(void) const;

	private:
		int	m_heures;
		int	m_minutes;
		int	m_secondes;
};
 
#endif
