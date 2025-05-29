#include<iostream>
using namespace std;

class Useless
{   
    private:
    int n;  //number of elements
    char * pc;  //pointer to data
    static inline int ct = 0; //number of objects
    void ShowObject();

    public:
    Useless();
    explicit Useless(int a);
    Useless(int a,char ch);
    Useless(const Useless & f);   // regular copy constructor
    Useless(Useless && ff);   //move constructor
    ~Useless();
    Useless  operator+(const Useless & f)const;
    void ShowData() const;
};

Useless::Useless()
{
    ++ct;
    n=0;
    pc=nullptr;
    cout << "Default constractor called.Objects number: " << ct << endl;
    ShowObject();
}

Useless::Useless(int a):n(a)
{
    ++ct;
    pc=new char[n];
    cout << "Int constructor called.Objects number: " << ct << endl;
    ShowObject();
}

Useless::Useless(int a,char ch):n(a)
{
    ++ct;
    pc=new char[n];
    for(int i=0;i<a;i++)
    pc[i]=ch;
    cout << "Int char constructor called.Objects number: " << ct << endl;
    ShowObject();
}

Useless::Useless(const Useless & f)
{
    ++ct;
    n=f.n;
    pc = new char[n];
    for(int i=0;i<n;i++)
    pc[i]=f.pc[i];
    cout << "Const copy constructor called.Objects number: " << ct << endl;
    ShowObject();
}

Useless::Useless(Useless && ff)
{
    ++ct;
    n=ff.n;
    ff.n=0;
    pc=ff.pc;
    ff.pc=nullptr;
    cout << "Move constructor called.Objects number: " << ct << endl;
    ShowObject();
}

Useless  Useless::operator+(const Useless & f)const
{   
    cout << "Entering operator+()\n";
    Useless u(n+f.n);
    for(int i=0;i<n;i++)
    u.pc[i]=pc[i];
    for(int i=0;i<f.n;i++)
    u.pc[n+i]=f.pc[i];
    cout << "temp object:\n";
    cout << "Leaving operator+()\n";
    return std::move(u);
}

void Useless::ShowObject()
{
    cout << "Number of elements: " << n;
    cout << " Data address: " << (void*)pc << endl;
}

void Useless::ShowData()const
{
    if(n==0)
    cout << "(object empty)";
    else
    for(int i=0;i<n;i++)
    cout << pc[i];
    cout << endl;
}

Useless::~Useless()
{
    cout << "destructor called;object left: " << --ct << endl;
    cout << "deleted object:\n";
    ShowObject();
    delete[]pc;
}



//application
int main()
{
    {
        Useless one(10,'x');
        Useless two = one;  //called copy constructor
        Useless three(20,'o');
        Useless four(one +three);   // calls operator+()  move constructor
        cout << "object one: ";
        one.ShowData();
        cout << "object two: ";
        two.ShowData();
        cout << "object three: ";
        three.ShowData();
        cout << "object four: ";
        four.ShowData();
    }
    cin.get();
    cin.get();
    return 0;
}