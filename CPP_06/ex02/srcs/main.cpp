#include "../class/Base.hpp"

int main()
{
  Base *ptr;

  ptr = generate();
  (void)ptr;
  std::cout << "generate done" << std::endl;

  return (0);
}
