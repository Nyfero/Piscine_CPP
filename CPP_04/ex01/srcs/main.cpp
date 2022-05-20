# include "../class/Animal.hpp"
# include "../class/Dog.hpp"
# include "../class/Cat.hpp"
# include "../class/WrongAnimal.hpp"
# include "../class/WrongCat.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "\t\e[92m---MAIN-PROVIDED---\e[39m" << std::endl << std::endl;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---MAIN-PROVIDED---\e[39m" << std::endl << std::endl;

	std::cout << std::endl;
	std::cout << "\t\e[92m---MAIN-CUSTOM---\e[39m" << std::endl << std::endl;
	{
		Animal *t[10];

		for (int i = 0; i < 10; i++)
		{
			if (i < 5)
				t[i] = new Cat;
			else
				t[i] = new Dog;
			std::cout << std::endl;
		}

		std::cout << std::endl;
		t[4]->makeSound();
		t[8]->makeSound();
		std::cout << std::endl;

		for (int i = 0; i < 10; i++)
		{
			delete t[i];
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---MAIN-CUSTOM---\e[39m" << std::endl << std::endl;

	std::cout << std::endl;
	std::cout << "\t\e[92m---TEST---\e[39m" << std::endl << std::endl;
	{
		{
			Animal	animal;
			animal.makeSound();
		}
		std::cout << std::endl;
		{
			Dog		dog;
			dog.makeSound();
		}
		std::cout << std::endl;
		{
			Cat		cat;
			cat.makeSound();
		}
			std::cout << std::endl;
		{
			WrongCat		wrongcat;
			wrongcat.makeSound();
		}
			std::cout << std::endl;
		{
			WrongAnimal		wronganimal;
			wronganimal.makeSound();
		}
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---TEST---\e[39m" << std::endl << std::endl;


	return (0);
}
