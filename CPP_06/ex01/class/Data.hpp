#ifndef DATA_HPP
# define DATA_HPP

# include <string>
# include <iostream>
# include <stdint.h>

typedef struct Data
{
	int		var;
}	Data;

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif
