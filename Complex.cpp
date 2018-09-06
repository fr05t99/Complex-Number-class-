#include "Complex.h"
#include<iostream>
#include<ostream>
#include<istream>

Complex::Complex()
{
    real = 0;
    imaginary = 0;
}

Complex::Complex(int r)
{
    real = r;
    imaginary = 0;
}

Complex::Complex(int r, int i)
{
    real = r;
    imaginary = i;
}

void Complex::setReal(int r)
{
    real = r;
}

void Complex::setImaginary(int i)
{
    imaginary = i;
}

std::ostream & operator<<(std::ostream & os, Complex &c)
{
    os << std::endl << c.real << " + " << c.imaginary << "i";
    return os;
}

std::istream & operator>>(std::istream & is, Complex &c)
{
    int r , i;
    std::cout << "\nEnter real part : ";
    std::cin >> r;
    c.setReal(r);
    std::cout << "\nEnter imaginary part : ";
    std::cin >> i;
    c.setImaginary(i);
    return is;
}
