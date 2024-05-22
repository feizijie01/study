#include<iostream>
#include<cstring>
class Cow
{
    char name[20];
    char * hobby;
    double weight;
    public:
    Cow();
    Cow(const char*nm,const char * ho, double wt);
    Cow(const Cow & c);
    ~Cow();
    Cow & operator=(const Cow & c);
    void ShowCow() const; // dispaly all cow data
};
using std::strcpy;
Cow::Cow()
{   
    strcpy(name,"null");
    hobby = nullptr;
    weight=0;
}

Cow::Cow(const char * nm,const char*ho,double wt)
{
    strcpy(name,nm);
    hobby=new char[strlen(ho)+1];
    strcpy(hobby,ho);
    weight=wt;
}

Cow::Cow(const Cow &c)
{
    strcpy(name,c.name);
    hobby=new char[strlen(c.hobby)+1];
    strcpy(hobby,c.hobby);
    weight=c.weight;
    std::cout << "Copy.\n";
}

Cow::~Cow()
{   
    delete [] hobby;
    std::cout << "The cow was deleted.\n";
}

Cow & Cow::operator=(const Cow & c)
{
    if(&c==this)
    return *this;
    delete [] hobby;
    strcpy(name,c.name);
    hobby=new char[strlen(c.hobby)+1];
    strcpy(hobby,c.hobby);
    weight=c.weight;
    std::cout << "Assigment.\n";
    return *this;
}

void Cow::ShowCow() const
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Hobby: " << hobby << std::endl;
    std::cout << "Weight: " << weight << std::endl;
    std::cout  << std::endl;
}

int main()
{
    using std::cout;
    using std::endl;
    using std::cin;
    
    {
    Cow c1;
    Cow c2("xiaobai","chicao",200);
    c1.ShowCow();
    c2.ShowCow();
    Cow c3;
    c3=c2;
    Cow c4(c2);
    c3.ShowCow();
    c4.ShowCow();
    }
    cin.get();
    cin.get();
    return 0;
}