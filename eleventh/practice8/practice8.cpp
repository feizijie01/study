#include"complex0.h"
Complex::Complex(int a,int b)
{
    real=a;
    imaginary=b;
}

Complex Complex::operator+(const Complex c)
{
    return Complex(real+c.real,imaginary+c.imaginary);
}

Complex Complex::operator-(const Complex c)
{
    return Complex(real-c.real,imaginary-c.imaginary);
}

Complex Complex::operator*(const Complex c)
{
    return Complex(real*c.real-imaginary*c.imaginary,real*c.imaginary+imaginary*c.real);
}

Complex Complex::operator~()
{
    return Complex(real,-imaginary);
}

Complex operator*(int n,const Complex c)
{
    return Complex(n*c.real,n*c.imaginary);
}

istream & operator>>(istream & is,Complex & c1)
{
    cout << "real: ";
    is >> c1.real;
    if(cin)
    cout << "imaginary: ";
    is >> c1.imaginary;
    return is;
}

ostream & operator<<(ostream & os,const Complex & c)
{
    os << "(" << c.real << " , " << c.imaginary << "i)\n";
    return os;
}