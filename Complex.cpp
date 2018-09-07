#include "Complex.h"
#include<iostream>

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

Complex Complex::operator + (Complex &c)
{
    Complex temp;
    temp.real = real + c.real;
    temp.imaginary = imaginary + c.imaginary;
    return temp;
}

Complex Complex::operator - (Complex &c)
{
    Complex temp;
    temp.real = real - c.real;
    temp.imaginary = imaginary - c.imaginary;
    return temp;
}

std::ostream & operator<<(std::ostream &os, Complex &c)
{
    if (c.imaginary >= 0)
    {
        os << std::endl << c.real << " + " << c.imaginary << "i";
    }
    else
    {
        os << std::endl << c.real << " - " << -(c.imaginary) << "i";
    }
    return os;
}

std::istream & operator>>(std::istream &is, Complex &c)
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
