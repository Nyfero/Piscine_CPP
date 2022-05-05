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
	std::string	file = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	std::string		line;
	std::ifstream	rfile(file);
	std::string		tmp = file;
	tmp = tmp + ".replace";
	std::ofstream	ofile(tmp);
	int		ret = 0;
	int		i;

	if (rfile.is_open() && ofile.is_open())
	{
		while (getline(rfile,line))
		{
			i = 0;
			ret = line.find(s1, i);
			while (ret != -1)
			{
				line.erase(ret, s1.length());
				line.insert(ret, s2);
				i = ret + s2.length();
				ret = line.find(s1, i);
				
			}
			ofile << line << "\n";
		}
		rfile.close();
		ofile.close();
	}
	else
		return (1);
	return (0);
}
