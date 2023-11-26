// twofile1.cpp -- variables with external ad internal linkage
#include<iostream> // to be compiled with two file2.cpp
int tom =3;   // external variable definition
int dick = 30;  // external variable definition 
static int harry = 300;   // static, internal linkage
extern const int a;

// function prototype
void remote_access();

int main()
{
    using std::cout;
    using std::cin;
    cout << "main() reports the following addresses:\n";
    cout << &tom << " = &tom, " << &dick  << " = &dick, ";
    cout << &harry  << " = &harry\n";
    remote_access();
    cin.get();
    return 0;
}