# include "../class/Character.hpp"

//					//
//	Constructors	//
//					//

Character::Character(): m_name("Character"), m_index(0), m_max(0) {
	std::cout << "Character Constructor by default call" << std::endl;
}

Character::~Character() {
	std::cout << "Character Destructor call" << std::endl;
	for (int i = 0; i < this->m_index; i++)
		delete this->m_inventory[i];
}

Character::Character(Character const& src): m_name(src.m_name), m_index(src.m_index), m_max(src.m_max) {
	std::cout << "Character Constructor by copy call" << std::endl;
	for(int i = 0; i < src.m_index; i++)
		this->m_inventory[i] = src.m_inventory[i]->clone();
}

Character & Character::operator=(Character const& src) {
	std::cout << "Character Constructor by assignement call" << std::endl;
	this->m_name = src.m_name;
	for (int i = 0; i < this->m_index; i++)
		delete this->m_inventory[i];
	this->m_index = src.m_index;
	for(int i = 0; i < src.m_index; i++)
		this->m_inventory[i] = src.m_inventory[i]->clone();
	this->m_max = src.m_max;
	return (*this);
}

Character::Character(std::string a_name): m_name(a_name), m_index(0), m_max(0) {
	std::cout << "Character Constructor surcharged call" << std::endl;
}

//				//
//	Functions	//
//				//

std::string const& Character::getName() const {
	return (this->m_name);
}

void	Character::equip(AMateria *m) {
	if (this->m_max < 4 && m != NULL)
	{
		std::cout << "\e[93m" << this->m_name << " equip a new spell: " << m->getType() << "\e[39m" << std::endl;
		this->m_inventory[this->m_index] = m->clone();
		this->m_max++;
		this->m_index = this->m_max;
	}
	else
		std::cout << "\e[96m" << this->getName() << " can't equip this spell !\e[39m" << std::endl;
}

void	Character::unequip(int idx) {
	if (idx >= 0 && idx < this->m_max)
	{
		std::cout << "\e[95m" << this->m_name << " unequip this spell: " << this->m_inventory[idx]->getType() << "\e[39m" << std::endl;
		this->m_inventory[idx] = 0;
		this->m_max--;
		this->m_index = idx;
	}
}

void	Character::use(int idx, ICharacter & target) {
	std::cout << "\e[95m" << this->getName() << " use the " << idx << " spell from his inventory !\e[39m" << std::endl;
	if (idx >= 0 && idx < 4 && idx != this->m_index)
		this->m_inventory[idx]->use(target);
	else
		std::cout << "\e[96m" << this->getName() << " don't have this spell !\e[39m" << std::endl;
}

AMateria	*Character::getSpell(int idx) const {
	if (idx >= 0 && idx < this->m_max)
		return (this->m_inventory[idx]);
	else
		std::cout << "\e[96mI can't get this spell !\e[39m" << std::endl;
	return (0);
}
