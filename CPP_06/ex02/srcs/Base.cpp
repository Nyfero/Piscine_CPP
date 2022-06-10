#include "../class/Base.hpp"

Base::~Base()
{}

Base * generate(void)
{
  srand (time(NULL));
  int	i = rand() % 3;

  if (i == 0)
  {
    A *a = NULL;
    std::cout << "It's an A !" << std::endl;
    return (a);
  }
  else if (i == 1)
  {
    B *b = NULL;
    std::cout << "It's a B !" << std::endl;
    return (b);
  }
  C *c = NULL;
  std::cout << "It's a C !" << std::endl;
  return (c);
}

void identify(Base *p)
{
  try
  {
    A *a;
    a = dynamic_cast<A>(p);
    ""
  }
}
