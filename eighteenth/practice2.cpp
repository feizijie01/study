#include<iostream>
#include<string>
#include<utility>
using namespace std;

class Cpmv
{
    public:
    struct Info
    {
        string qcode;
        string zcode;
    };

    private:
    Info * pi;

    public:
    Cpmv(){pi=new Info;pi->qcode="q";pi->zcode="z"; cout << "Moren gouzao.\n";};
    Cpmv(string q,string z){pi=new Info;pi->qcode=q;pi->zcode=z;cout << "putong gouzao.\n";}
    Cpmv(const Cpmv & cp);
    Cpmv(Cpmv && mv);
    ~Cpmv(){delete pi; cout << "xigou\n";}
    Cpmv & operator=(const Cpmv & cp);
    Cpmv & operator=(Cpmv && mv);
    Cpmv operator+(const Cpmv & obj)const;
    void Display()const;
};

Cpmv::Cpmv(const Cpmv & cp)
{
    pi=new Info;
    pi->qcode=cp.pi->qcode;
    pi->zcode=cp.pi->zcode;
    cout << "Fuzhi gouzao.\n";
}

Cpmv::Cpmv(Cpmv && mv)
{   
    pi = mv.pi;
    mv.pi=nullptr;
    cout << "Yidong gouzao\n";
}

Cpmv & Cpmv::operator=(const Cpmv & cp)
{   
    cout << "fuzhi yunsuanfu\n";
    if(&cp==this)
    return *this;
    delete pi;
    pi = new Info;
    pi->qcode=cp.pi->qcode;
    pi->zcode=cp.pi->zcode;
    return *this;
    
}

Cpmv & Cpmv::operator=(Cpmv && cp)
{   
    cout << "yidongfuzhi yunsuanfu\n";
    if(&cp==this)
    return *this;
    delete pi;
    pi=cp.pi;
    cp.pi=nullptr;
    return *this;
    
}

Cpmv Cpmv::operator+(const Cpmv & cp)const
{
    Cpmv c;
    cout << "Moren gouzao in + operator\n";
    c.pi->qcode=(*this).pi->qcode+cp.pi->qcode;
    c.pi->zcode=(*this).pi->zcode+cp.pi->zcode;
    return c;
}

void Cpmv::Display()const
{
    cout << "Qcode: " << this->pi->qcode << endl;
    cout <<"Zcode: " << this->pi->zcode << endl;
}

int main()
{
    Cpmv c1;
     Cpmv c2("qcode","zcode");
     Cpmv c3(c2);
     Cpmv c4=move((c2+c3));
     cout << "=========\n";
     Cpmv c5=c2;
     Cpmv c6;
     c6=c2+c3;
     c6.Display();
    cin.get();
    return 0;
}