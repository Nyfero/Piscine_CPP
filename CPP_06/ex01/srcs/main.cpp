#include "../class/Data.hpp"

int	main()
{
	std::cout << std::endl;
	std::cout << "\t\t\e[92m---MAIN---\e[39m" << std::endl << std::endl;
	{

		Data			ptr;
		Data			*tmp;
		uintptr_t	raw;

		ptr.var = 42;

		std::cout << std::endl;
		std::cout << "\t\e[92m---DATA-START---\e[39m" << std::endl << std::endl;
		std::cout << "Var : "<< ptr.var << std::endl;
		std::cout << &ptr << std::endl;

		std::cout << std::endl;
		std::cout << "\t\e[92m---Serialization---\e[39m" << std::endl << std::endl;
		raw = serialize(&ptr);

		std::cout << std::endl;
		std::cout << "\t\e[92m---UINTPTR_T---\e[39m" << std::endl << std::endl;
		std::cout << "Var : "<< raw << std::endl;
		std::cout << &raw << std::endl;

		std::cout << std::endl;
		std::cout << "\t\e[92m---Deserialization---\e[39m" << std::endl << std::endl;
		tmp = deserialize(raw);

		std::cout << std::endl;
		std::cout << "\t\e[92m---DATA-END---\e[39m" << std::endl << std::endl;
		std::cout << "Var : "<< tmp->var << std::endl;
		std::cout << tmp << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\t\t\e[91m---MAIN---\e[39m" << std::endl << std::endl;
	return (0);
}

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	ret;

	ret = reinterpret_cast<uintptr_t>(ptr);
	return (ret);
}

Data*			deserialize(uintptr_t raw)
{
	Data	*ret;

	ret = reinterpret_cast<Data *>(raw);
	return (ret);
}
