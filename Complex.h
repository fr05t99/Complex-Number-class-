#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>

class Complex
{
    public:
        Complex();
        Complex(int);
        Complex(int, int);
        void setImaginary(int);
        void setReal(int);
        Complex operator + (Complex &c);
        Complex operator - (Complex &c);
        friend std::ostream & operator<<(std::ostream &os, Complex &c);
        friend std::istream & operator>>(std::istream &is, Complex &c);
    protected:

    private:
        int real;
        int imaginary;
};

#endif // COMPLEX_H
