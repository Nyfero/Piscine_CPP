#ifndef MAIN_H
# define MAIN_H

# include <iostream>
# include <string>
//Stream class to both read and write from/to files.
# include <fstream>

int	read_file(char **av);

int	error_arg(void);
int	error_file(void);
int	error_empty(void);

#endif
