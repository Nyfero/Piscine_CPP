#include "Duree.hpp"

int main()
{
	Duree duree1(3, 90, 75), duree2(4, 31, 15);
	duree1.afficherHeure();
	duree2.afficherHeure();
	
	if (duree1 == duree2)
		std::cout << "Les durées sont égales" << std::endl;
	else
		std::cout << "Les durées sont différentes" <<  std::endl;
		
	if (duree1 < duree2)
		std::cout << "duree1 < duree2" << std::endl;
	else
		std::cout << "duree1 >= duree2" <<  std::endl;

	if (duree1 > duree2)
		std::cout << "duree1 > duree2" << std::endl;
		else
				std::cout << "duree1 <= duree2" <<  std::endl;
	return (0);
}
