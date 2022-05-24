# include "../class/Brain.hpp"

Brain::Brain()
{ std::cout << "Brain Constructor by default call" << std::endl; }

Brain::~Brain()
{ std::cout << "Brain Destructor call" << std::endl; }

Brain::Brain(Brain const& src)
{ std::cout << "Brain Constructor by copy call" << std::endl; }

Brain & Brain::operator=(Brain const& src)
{
	std::cout << "Brain Constructor by assignement call" << std::endl;
	return (*this);
}
