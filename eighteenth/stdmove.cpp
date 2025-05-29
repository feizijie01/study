#include<iostream>
#include<utility>
using namespace std;
class Useless
{   
    private:
    int n;
    static int ct;
    char * pc;
    void ShowObject()const;
    public:
    Useless();
    explicit Useless(int n);
    Useless(int n,char ch);
    Useless(const Useless & f);
    Useless(Useless && f);
    Useless operator+(const Useless & f)const;
    Useless & operator=(const Useless & f);
    Useless & operator=(Useless && f);
    void ShowData()const;
    ~Useless();
};

int Useless::ct=0;

Useless::Useless()
{   
    ct++;
    n=0;
    pc=nullptr;
}

Useless::Useless(int m)
{   
    ct++;
    n=m;
    pc=new char[n];
}

Useless::Useless(int m,char ch)
{
    ct++;
    n=m;
    pc = new char[n];
    for(int i=0;i<n;i++)
    pc[i]=ch;
}

Useless::Useless(const Useless & f)
{
    ct++;
    n=f.n;
    pc = new char[n];
    for(int i=0;i<n;i++)
    pc[i]=f.pc[i];
}

Useless::Useless(Useless && f)
{
    ct++;
    n=f.n;
    pc=f.pc;
    f.n=0;
    f.pc=nullptr;
}

Useless Useless::operator+(const Useless & f)const
{
    Useless temp = Useless(n+f.n);
    
    for(int i=0;i<n;i++)
    temp.pc[i]=pc[i];
    for(int i=0;i<f.n;i++)
    temp.pc[i+n]=f.pc[i];
    return temp;
}

Useless & Useless::operator=(const Useless & f)
{   
    cout << "copy assignment operator called:\n";
    if(this == &f)
    return *this;
    delete [] pc;
    n=f.n;
    pc = new char[n];
    for(int i=0;i<n;i++)
    pc[i]=f.pc[i];
    return *this;
}

Useless & Useless::operator=(Useless && f)
{
    cout << "move assignment operator called:\n";
    if(this == &f)
    return *this;
    delete [] pc;
    n=f.n;
    pc=f.pc;
    f.n=0;
    f.pc=nullptr;
    return *this;
}

Useless::~Useless()
{
    delete [] pc;
}

void Useless::ShowObject()const
{
    cout << "Number of elements: " << n;
    cout << "Data address: " <<(void*)pc << endl;
}

void Useless::ShowData()const
{
    if(n==0)
    cout << "(Object empty)";
    else
    for(int i=0;i<n;i++)
    cout << pc[i];
    cout << endl;
}


// application
int main()
{
    {
        Useless one(10,'x');
        Useless two = one+one;  //calls move constructor
        cout <<  "Object one: ";
        one.ShowData();
        cout << "Object two: ";
        two.ShowData();
        Useless three,four;
        cout << "three = one\n";
        three = one;  //automatic copy assignment
        cout << "now object three = ";
        three.ShowData();
        cout  << "and object one = ";
        one.ShowData();
        cout << "four = one+two\n";
        four=one+two;   // automatic move assignment
        cout << "now object four= ";
        four.ShowData();
        cout << "four = move(one)\n";
        four = move(one);   // forced move assignment
        cout << "now object four = ";
        four.ShowData();
        cout << "now boject one = ";
        one.ShowData();
    }
    cin.get();
    return 0;
}