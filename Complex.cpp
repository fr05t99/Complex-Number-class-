#include "Complex.h"
#include<iostream>

Complex::Complex()
{
    real = 0;
    imaginary = 0;
}

Complex::Complex(float r)
{
    real = r;
    imaginary = 0;
}

Complex::Complex(float r, float i)
{
    real = r;
    imaginary = i;
}

void Complex::setReal(float r)
{
    real = r;
}

void Complex::setImaginary(float i)
{
    imaginary = i;
}

float Complex::getReal()
{
    return real;
}

float Complex::getImaginary()
{
    return imaginary;
}

Complex Complex::reciprocal()
{
    Complex temp;
    float denominator = real * real + imaginary * imaginary;
    temp.real = real / denominator;
    temp.imaginary = imaginary / denominator;
    temp.imaginary = -temp.imaginary;
    return temp;
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

Complex Complex::operator * (Complex &c)
{
    Complex temp;
    temp.real = (real * c.real) - (imaginary * c.imaginary);
    temp.imaginary = (imaginary * c.real) + (real * c.imaginary);
    return temp;
}

Complex Complex::operator / (Complex &c)
{
    Complex temp;
    float denominator = c.real * c.real + c.imaginary * c.imaginary;
    temp.real = (real * c.real + imaginary * c.imaginary) / denominator;
    temp.imaginary = (imaginary * c.real - real * c.imaginary) / denominator;
    return temp;
}


Complex operator * (float a, Complex &c)
{
    float r, i;
    Complex temp;
    r = c.getReal() * a;
    i = c.getImaginary() * a;
    temp.setImaginary(i);
    temp.setReal(r);
    return temp;
}

void Complex::operator ! ()
{
    imaginary = -imaginary;
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
    float r , i;
    std::cout << "\nEnter real part : ";
    std::cin >> r;
    c.setReal(r);
    std::cout << "\nEnter imaginary part : ";
    std::cin >> i;
    c.setImaginary(i);
    return is;
}
