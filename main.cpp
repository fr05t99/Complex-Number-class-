#include <iostream>
#include "Complex.h"

int main()
{
    Complex c1(3, 2);
    Complex c2(4, 3);
    Complex c3 = c2.reciprocal();
    std::cout << c3;
    return 0;
}
