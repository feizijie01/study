#include<iostream>
#include<stdexcept>

int main()
{
    using namespace std;
    int m,n;
    while(cin >> m >> n)
    {
        try{
            if(n==0)
            {
                throw invalid_argument("chu shu bu wei 0");
            }
        cout << m/n;

    }catch(invalid_argument err){
        cout << err.what();
        cout << "\nTry again or quit.y or n"<< endl;
        char c;
        cin >> c;
        if(!cin || c=='n')
        break;
    }

    }
    
    
    cin.get();
    cin.get();
    return 0;
}