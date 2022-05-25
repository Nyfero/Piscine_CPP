# include "../class/Bureaucrat.hpp"

int main()
{
	Bureaucrat	boss("Patron", 1);
	Bureaucrat	sousFifre("Stagiare", 149);
	Bureaucrat	licencie("Vire", 149);
	Bureaucrat	boss2(boss);
	licencie = sousFifre;
	return (0);
}
