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
	while (++i < 100)
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

void	Brain::printIdeas()
{
	int i = -1;
	
	while (++i < 5)
	{ std::cout << "ideas [" << i << "]: " << this->m_ideas[i] << std::endl; }
}

void 	Brain::set3Ideas(std::string a_1, std::string a_2, std::string a_3)
{
	this->m_ideas[0] = a_1;
	this->m_ideas[1] = a_2;
	this->m_ideas[2] = a_3;
}
