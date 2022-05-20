# include "../class/Brain.hpp"

Brain::Brain()
{ std::cout << "Brain Constructor by default call" << std::endl; }

Brain::~Brain()
{ std::cout << "Brain Destructor call" << std::endl; }

Brain::Brain(Brain const& src)
{
	int i;

	std::cout << "Brain Constructor by copy call" << std::endl;
	i = -1;
	while (i++ < 100)
		this->m_ideas[i] = src.m_ideas[i];
}

Brain & Brain::operator=(Brain const& src)
{
	int i;

	std::cout << "Brain Constructor by assignement call" << std::endl;
	i = -1;
	while (++i < 100)
		this->m_ideas[i] = src.m_ideas[i];
	return (*this);
}
