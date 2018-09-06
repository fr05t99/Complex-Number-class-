#ifndef COMPLEX_H
#define COMPLEX_H
#include<ostream>
#include<istream>

class Complex
{
    public:
        Complex();
        Complex(int);
        Complex(int, int);
        void setImaginary(int);
        void setReal(int);
        friend std::ostream & operator<<(std::ostream &, Complex&);
        friend std::istream & operator<<(std::istream &, Complex&);
    protected:

    private:
        int real;
        int imaginary;
};

#endif // COMPLEX_H
