#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>

class Complex
{
    public:
        //Constructors
        Complex();
        Complex(float);
        Complex(float, float);

        //Getters and Setters
        void setImaginary(float);
        void setReal(float);
        float getReal();
        float getImaginary();

        //Operator Overloaded Functions
        Complex operator + (Complex &c);
        Complex operator - (Complex &c);
        Complex operator * (Complex &c);
        Complex operator / (Complex &c);
        void operator ! ();

        //Friend Functions
        friend Complex operator * (float a, Complex &c);
        friend std::ostream & operator<<(std::ostream &os, Complex &c);
        friend std::istream & operator>>(std::istream &is, Complex &c);

        //Member Functions
        Complex reciprocal();


    protected:

    private:
        float real;
        float imaginary;
};

#endif // COMPLEX_H
