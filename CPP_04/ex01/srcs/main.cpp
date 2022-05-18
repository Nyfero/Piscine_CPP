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
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << std::endl;
		std::cout << j->getType() << " " << std::endl;
		j->makeSound(); //will output the cat sound!
		std::cout << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();//will output the dog sound!
		std::cout << std::endl;
		std::cout << meta->getType() << " " << std::endl;
		meta->makeSound();//will output the animal sound!
		std::cout << std::endl;

		delete meta;
		delete j;
		delete i;
	}
	std::cout << std::endl;
	std::cout << "\t\e[91m---MAIN-PROVIDED---\e[39m" << std::endl << std::endl;
	
	std::cout << std::endl;
	std::cout << "\t\e[92m---MAIN-CUSTOM---\e[39m" << std::endl << std::endl;
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		std::cout << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();//will output the wrong cat sound!
		std::cout << std::endl;
		std::cout << meta->getType() << " " << std::endl;
		meta->makeSound();//will output the wrong animal sound!
		std::cout << std::endl;

		delete meta;
		delete i;
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
