# include "../class/A_Animal.hpp"
# include "../class/Dog.hpp"
# include "../class/Cat.hpp"
# include "../class/WrongAnimal.hpp"
# include "../class/WrongCat.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "\t\e[92m---MAIN---\e[39m" << std::endl << std::endl;
	{
		//A_Animal	animal;

		std::cout << "=============OTHER TEST============" <<std::endl;

		Dog dog;
		Cat cat;

		dog.makeSound();
		cat.makeSound();

		return 0;
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---MAIN---\e[39m" << std::endl << std::endl;

	return (0);
}
