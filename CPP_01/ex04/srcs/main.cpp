#include "../inc/replace.h"

int main(int ac, char **av)
{
	if (ac != 4)
		return (error_arg());
	if (read_file(av))
		return (1);
	return (0);
}

int	read_file(char **av)
{
	std::string	file = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	std::string		line;
	std::ifstream	rfile;
	std::ofstream	ofile;
	std::string		tmp;
	const char *str;
	int		ret = 0;
	int		i;

	tmp = file + ".replace";
	str = tmp.c_str();
	rfile.open(av[1]);
	if (rfile.fail())
		return (error_file());
	ofile.open(str);
	if (ofile.fail())
		return (error_file());
	if (s1.empty() || s2.empty())
		return (error_empty());
	
	
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
		return (error_file());
	return (0);
}
