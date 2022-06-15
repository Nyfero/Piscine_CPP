# include "../class/A_Materia.hpp"

AMateria::AMateria(std::string const& type): m_type(type) {
	std::cout << "A_Materia Constructor surcharged call" << std::endl;
}
