#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include<iostream>
using std::istream;
using std::ostream;
using std::cin;
using std::cout;
class Complex
{
    private:
    int real;
    int imaginary;
    public:
    Complex(int a,int b);
    Complex(){real=imaginary=0;};
    ~Complex(){};
    Complex operator+(const Complex c);
    Complex operator-(const Complex c);
    Complex operator*(const Complex c);
    Complex operator~();
    friend Complex operator*(int n,const Complex c);
    friend istream & operator>>(istream & is,Complex & c);
    friend ostream & operator<<(ostream & os,const Complex & c);
};
#endif