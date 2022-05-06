#include "../Class/Harl.hpp"

Harl::Harl()
{
	return ;
}

void	Harl::complain(std::string level)
{
	int		i = 0;
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	while (i < 4 && level != str[i])
		i++;
	switch (i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
		default:
		{
			std::cout << "\e[92m---DEFAULT---\e[39m" << std::endl;
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
}

void	Harl::debug(void)
{
	std::cout << "\e[92m---DEBUG---\e[39m" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "\e[92m---INFO---\e[39m" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "\e[92m---WARNING---\e[39m" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "\e[92m---ERROR---\e[39m" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
