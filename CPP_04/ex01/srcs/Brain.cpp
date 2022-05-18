# include "../class/Brain.hpp"

Brain::Brain(): m_type("Brain")
{ std::cout << "Brain Constructor by default call" << std::endl; }

Brain::~Brain()
{ std::cout << "Brain Destructor call on: " << this->m_type << std::endl; }

Brain::Brain(Brain const& src): m_type(src.m_type)
{ std::cout << "Brain Constructor by copy call" << std::endl; }

Brain & Brain::operator=(Brain const& src)
{
	std::cout << "Brain Constructor by assignement call" << std::endl;
	this->m_type = src.m_type;
	return (*this);
}
