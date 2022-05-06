#include "../inc/replace.h"

int main(int ac, char **av)
{
	if (ac != 4)
		return (error_arg());
	if (read_file(av))
		return (error_file());
	return (0);
}

int	read_file(char **av)
{
	std::string		line;
	std::ifstream	rfile(av[1]);
	std::string		tmp = av[1];
	tmp = tmp + ".replace";
	std::ofstream	ofile(tmp);
	int 	ret = 0;
	int i = 1;

	if (rfile.is_open() && ofile.is_open())
	{
		while (getline(rfile,line))
		{
			std::cout << "(" << i << ") - ";
			ret = line.find(av[2]);
			std::cout << ret << std::endl;
			i++;
		}
		rfile.close();
		ofile.close();
	}
	else
		return (1);
	return (0);
}
