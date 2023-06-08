#include<iostream>
int main()
{
    using namespace std;
    double tvarps;
    double shui=0;
    cout << "Please enter your income by tvarps: ";
    while((cin >> tvarps)&&(tvarps>0))
    {
        if (tvarps <= 5000)
        {
        shui =0;
        cout << "Your shui is " << shui << " tvarps." << endl;
        cout << "Please enter your income by tvarps: ";
        continue;
        }
        else if((tvarps<=15000)&&(tvarps>=5001))
        {
        shui =(tvarps-5000)*0.1;
        cout << "Your shui is " << shui << " tvarps." << endl;
        cout << "Please enter your income by tvarps: ";
        continue;
        }
        else if((tvarps<=35000)&&(tvarps>=15001))
        {
        shui=10000*0.1+(tvarps-15000)*0.15;
        cout << "Your shui is " << shui << " tvarps." << endl;
        cout << "Please enter your income by tvarps: ";
        continue;
        }
        else if(tvarps>35000)
        {
        shui=10000*0.1+20000*0.15+(tvarps-35000)*0.2;
        cout << "Your shui is " << shui << " tvarps." << endl;
        cout << "Please enter your income by tvarps: ";
        continue;
        }
    }
    if (!cin)
    {
        cin.clear();
        while(cin.get()!='\n')
        continue;
    }
    cout << "Bye.";
    cin.get();
    cin.get();
    return 0;
}