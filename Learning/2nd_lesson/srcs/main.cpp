#include "../class/Duree.hpp"

int main()
{
	Duree duree1(7, 90, 75), duree2(4, 31, 15);
	std::cout << "duree1 = ";
	duree1.afficherHeure();
	std::cout << "duree2 = ";
	duree2.afficherHeure();
	
	std::cout << "duree1 == duree2 : ";
	if (duree1 == duree2)
		std::cout << "Vrai" << std::endl;
	else
		std::cout << "Faux" <<  std::endl;
		
	std::cout << "duree1 < duree2 : ";
	if (duree1 < duree2)
		std::cout << "Vrai" << std::endl;
	else
		std::cout << "Faux" <<  std::endl;

	std::cout << "duree1 > duree2 : ";
	if (duree1 > duree2)
		std::cout << "Vrai" << std::endl;
	else
		std::cout << "Faux" <<  std::endl;
		
	Duree	tmp;
	tmp = duree1 + duree2;
	std::cout << "duree1 + duree2 : ";
	tmp.afficherHeure();
	return (0);
}
