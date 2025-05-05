#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>
using namespace std;
struct planet
{
    char name[20];
    double population;
    double g;
};
inline void eatline(){while(cin.get()!='\n') continue;};
int main()
{
    
    planet pl;
    cout << fixed << right;
    
    const char * file="planet.dat";
    ifstream fin;
    fin.open(file,ios_base::in|ios_base::binary);
    if(fin.is_open())
    {  
        cout << "The content of " << file << " : \n";
        while(fin.read((char*)&pl,sizeof pl))
        {
            cout <<setw(20) << pl.name << ": "
        <<setprecision(0) << setw(12) << pl.population
        <<setprecision(2) << setw(6) << pl.g  << endl;
        }
        fin.close();
    }
    

    ofstream fout(file,ios_base::out|ios_base::app|ios_base::binary);
    if(!fout.is_open())
    {
        cerr << "Cant open " << file << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Enter Planet name(q to quit)\n";
    cin.get(pl.name,20);
    while(pl.name[0]!='q')
    {
        eatline();
        cout << "Enter population: ";
        cin >> pl.population;
        cout << "Enter G: ";
        cin >> pl.g;
        fout.write((char*)&pl,sizeof pl);
        cout << "Enter Planet name(q to quit)\n";
        
        eatline();
        cin.get(pl.name,20);
    }
    fout.close();

    
    fin.open(file,ios_base::in|ios_base::binary);
    if(fin.is_open())
    {  
        cout << "The new content of " << file << " : \n";
        while(fin.read((char*)&pl,sizeof pl))
        {
            cout <<setw(20) << pl.name
        <<setprecision(0) << setw(12) << pl.population
        <<setprecision(2) << setw(6) << pl.g  << endl;
        }
        fin.close();
    }
    
    
    cin.get();
    cin.get();
   
    return 0;
}