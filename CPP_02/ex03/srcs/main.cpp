#include "../class/Fixed.hpp"
#include "../class/Point.hpp"

int main()
{
	Point a(0.0f, 0.0f);
	Point b(10.5f, 0.0f);
	Point c(5.0f, 5.5f);

	Point d(7.5f, 2.9f); // should be true
	Point e(7.5f, 3.0f); // on a side, should be false
	Point f(7.5f, 3.1f); // should be false
	Point g(0.0f, 0.0f); // on A, should be false
	
	if (bsp(a, b, c, d) == true)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	if (bsp(a, b, c, e) == true)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	if (bsp(a, b, c, f) == true)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;

	if (bsp(a, b, c, g) == true)
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	return (0);
}
