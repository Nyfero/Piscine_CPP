# include "../class/MateriaSource.hpp"

//					//
//	Constructors	//
//					//

MateriaSource::MateriaSource(): m_index(0) {
	std::cout << "MateriaSource Constructor by default call" << std::endl;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource Destructor call" << std::endl;
	for (int i = 0; i < this->m_index; i++)
		delete this->m_memory[i];
}

MateriaSource::MateriaSource(MateriaSource const& src): m_index(src.m_index) {
	std::cout << "MateriaSource Constructor by copy call" << std::endl;
	for (int i = 0; i < src.m_index; i++)
		this->m_memory[i] = src.m_memory[i]->clone();
}

MateriaSource & MateriaSource::operator=(MateriaSource const& src) {
	std::cout << "MateriaSource Constructor by assignement call" << std::endl;
	for (int i = 0; i < this->m_index; i++)
		delete this->m_memory[i];
	this->m_index = src.m_index;
	for (int i = 0; i < src.m_index; i++)
		this->m_memory[i] = src.m_memory[i]->clone();
	return (*this);
}

//				//
//	Functions	//
//				//

void	MateriaSource::learnMateria(AMateria *m) {
	if (this->m_index < 4)
	{
		this->m_memory[this->m_index] = m;
		std::cout << "\e[34mMateriaSource learn this spell: " << this->m_memory[this->m_index]->getType() << "\e[39m" << std::endl;
		this->m_index++;
	}
	else
	{
		std::cout << "\e[91mMateriaSource is full ! The spell will be destroy\e[39m" << std::endl;
		delete m;
	}
}

AMateria * MateriaSource::createMateria(std::string const& type) {
	std::cout << "\e[90mCreating " << type << " spell from my spellbook !\e[39m" << std::endl;
	for (int i = 0; i < this->m_index; i++)
		if (this->m_memory[i]->getType() == type)
			return (this->m_memory[i]);
	std::cout << "\e[91m" << type << "'s spell isn't in my spellbook !\e[39m"<< std::endl;
	return (0);
}
