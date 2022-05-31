#ifndef FIGURE_HPP
# define FIGURE_HPP

# include <string>
# include <iostream>

class Figure
{
	public:
		virtual void	afficher() const;
		virtual int		perimetre() = 0;
		virtual int		aire() = 0;
};

#endif
