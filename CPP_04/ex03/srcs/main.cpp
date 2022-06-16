# include "../class/A_Materia.hpp"
# include "../class/Character.hpp"
# include "../class/Cure.hpp"
# include "../class/Ice.hpp"
# include "../class/ICharacter.hpp"
# include "../class/IMateriaSource.hpp"
# include "../class/MateriaSource.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "\t\t\e[92m---PROVIDED-MAIN---\e[39m" << std::endl << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		
		delete bob;
		delete me;
		delete src;
	}
	std::cout << std::endl;
	std::cout << "\t\t\e[91m---PROVIDED-MAIN---\e[39m" << std::endl << std::endl;
	
	std::cout << std::endl;
	std::cout << "\t\t\e[92m---CUSTOM-MAIN---\e[39m" << std::endl << std::endl;
	{
		std::cout << std::endl;
		std::cout << "\t\e[91m---Init MateriaSource---\e[39m" << std::endl << std::endl;
		
		IMateriaSource	*src = new MateriaSource();
		
		src->learnMateria(new Ice());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Cure());
		
		std::cout << std::endl;
		std::cout << "\t\e[93m---Init MateriaSource---\e[39m" << std::endl << std::endl;
		
		std::cout << std::endl;
		std::cout << "\t\e[93m---MateriaSource Full---\e[39m" << std::endl << std::endl;
		
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		std::cout << std::endl;
		
		std::cout << "\t\e[91m---MateriaSource Full---\e[39m" << std::endl << std::endl;
		
		std::cout << std::endl;
		std::cout << "\t\e[93m---Create Character with spell---\e[39m" << std::endl << std::endl;
		
		ICharacter* me = new Character("me");
		AMateria* tmp;
		
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("fireball");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		
		std::cout << std::endl;
		std::cout << "\t\e[91m---Create Character with spell---\e[39m" << std::endl << std::endl;
		
		std::cout << std::endl;
		std::cout << "\t\e[93m---Character use spell---\e[39m" << std::endl << std::endl;
		
		ICharacter* bob = new Character("bob");
		
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(3, *bob);
		me->use(4, *bob);
		
		std::cout << std::endl;
		std::cout << "\t\e[91m---Character use spell---\e[39m" << std::endl << std::endl;
		
		std::cout << std::endl;
		std::cout << "\t\e[93m---Character drop spell---\e[39m" << std::endl << std::endl;
		
		AMateria* floor[10];
		
		floor[0] = me->getSpell(3);
		me->unequip(3);
		me->use(3, *bob);
		floor[1] = me->getSpell(1);
		me->unequip(1);
		me->use(1, *bob);
		me->use(2, *bob);
		
		me->equip(tmp);
		me->use(1, *bob);
		me->use(3, *bob);
		
		me->equip(tmp);
		me->use(3, *bob);
		
		std::cout << std::endl;
		std::cout << "\t\e[91m---Character drop spell---\e[39m" << std::endl << std::endl;
		
		for (int i = 0; i < 10; i++)
			delete floor[i];
		delete bob;
		delete me;
		delete src;
	}
	std::cout << std::endl;
	std::cout << "\t\t\e[91m---CUSTOM-MAIN---\e[39m" << std::endl << std::endl;
	return (0);
}
