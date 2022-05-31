# include "../class/Figure.hpp"
# include "../class/Triangle.hpp"
# include "../class/Carre.hpp"
# include "../class/Rectangle.hpp"
# include "../class/Cercle.hpp"

int	main()
{
	Triangle	a(3, 1);
	Carre		b(4);
	Rectangle	c(3, 2);
	Cercle		d(1);
	
	std::cout << "Triangle: " << std::endl;
	a.afficher();
	std::cout << "perimetre: " << a.perimetre() << std::endl;
	std::cout << "aire: " << a.aire() << std::endl;
	std::cout << std::endl;
	
	std::cout << "Carre: " << std::endl;
	b.afficher();
	std::cout << "perimetre: " << b.perimetre() << std::endl;
	std::cout << "aire: " << b.aire() << std::endl;
	std::cout << std::endl;
	
	std::cout << "Rectangle: " << std::endl;
	c.afficher();
	std::cout << "perimetre: " << c.perimetre() << std::endl;
	std::cout << "aire: " << c.aire() << std::endl;
	std::cout << std::endl;
	
	std::cout << "Cercle: " << std::endl;
	d.afficher();
	std::cout << "perimetre: " << d.perimetre() << std::endl;
	std::cout << "aire: " << d.aire() << std::endl;
	std::cout << std::endl;
	return 0;
}
