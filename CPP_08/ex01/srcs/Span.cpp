# include "../class/Span.hpp"

//					//
//	Constructors	//
//					//

Span::Span(): m_size(0), m_compt(0) {
	this->m_array.resize(0);
	std::cout << "Span Constructor by default call" << std::endl;
}

Span::Span(unsigned int a_size): m_size(a_size), m_compt(0) {
	this->m_array.resize(this->m_size);
	std::cout << "Span Constructor surcharged call" << std::endl;
}

Span::~Span() {
	std::cout << "Span Destructor call" << std::endl;
}

Span::Span(Span const& src): m_size(src.m_size), m_compt(src.m_compt) {
	this->m_array.resize(this->m_size);
	for (unsigned int i = 0; i < src.m_size; i++)
		this->m_array[i] = src.m_array[i];
	std::cout << "Span Constructor by copy call" << std::endl;
}

Span & Span::operator=(Span const& src) {
	this->m_size = src.m_size;
	this->m_compt = src.m_compt;
	if (this->m_array.empty() == 0)
		this->m_array.clear();
	this->m_array.resize(this->m_size);
	for (unsigned int i = 0; i < src.m_size; i++)
		this->m_array[i] = src.m_array[i];
	std::cout << "Span Constructor by assignement call" << std::endl;
	return (*this);
}

//				//
//	Functions	//
//				//

void	Span::addNumber(int nb) {
	if (this->m_compt >= this->m_size)
		throw ToManyElement();
	this->m_array[this->m_compt] = nb;
	this->m_compt++;
	std::cout << "Number " << nb << " added to the span" << std::endl;
}

int		Span::shortestSpan() const {
	if (this->m_compt == 0 || this->m_compt == 1)
		throw NotEnoughNumber();

	Span	tmp(*this);
	std::sort(tmp.m_array.begin(), tmp.m_array.end());
	
	int		ret = tmp.m_array[1] - tmp.m_array[0];
	for (unsigned int i = 0; i < tmp.m_compt; i++)
	{
		if (i + 1 < tmp.m_compt)
			if (tmp.m_array[i + 1] - tmp.m_array[i] < ret)
				ret = tmp.m_array[i + 1] - tmp.m_array[i];
	}
	return (ret);
}

int		Span::longestSpan() const {
	if (this->m_compt == 0 || this->m_compt == 1)
		throw NotEnoughNumber();

	Span	tmp(*this);
	unsigned int	i;
	
	std::sort(tmp.m_array.begin(), tmp.m_array.end());
	for (i = 0; i < tmp.m_compt;)
		i++;
	int ret = tmp.m_array[i - 1];
	return (ret - tmp.m_array[0]);
}

void	Span::addRange(int size) {
	for (int i = 0; i < size; i++)
	{
		if (this->m_compt >= this->m_size)
			throw ToManyElement();
		this->m_array[i] = i;
		this->m_compt++;
	}
}

void	Span::addList(std::vector<int>	tab) {
	int size = tab.size();
	if (size + this->m_compt > this->m_size)
		throw ToManyElement();
	
	for(int i = 0; i < size; i++)
	{
		this->m_array[this->m_compt] = tab[i];
		this->m_compt++;
	}
}
