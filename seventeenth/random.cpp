#include<iostream>
#include<fstream>
#include<iomanip>
#include<cstdlib>
using namespace std;
const int LIM =20;

struct planet
{
    char name[LIM];
    double population;
    double g;
};

inline void eatline(){while(cin.get()!='\n') continue;}

int main()
{
    planet pl;
    int ct=0;
    fstream finout;
    cout << fixed;
    const char * file = "planet.dat";
    finout.open(file,ios_base::in|ios_base::out|ios_base::binary);
    if(finout.is_open())
    {
        finout.seekg(0);
        cout << "Content of " << file << " file :\n";
        while(finout.read((char*)&pl,sizeof pl))
        {
            cout << ct++ << ": " << setw(LIM) << pl.name << ": "
                 << setw(12) << setprecision(0) << pl.population
                 << setw(6) << setprecision(2) << pl.g << endl;
        }
        if(finout.eof())
         finout.clear();
        
        else
        {
            cerr << "Read error";
            exit(EXIT_FAILURE);
        }

    }
    else
    {
        cerr << "open error\n";
        exit(EXIT_FAILURE);
    }

    cout << "Enter a record number: ";
    long rec;
    cin >> rec;
    eatline();
    if(rec<0 || rec >=ct)
    {
        cerr << "Error record number.\n";
        exit(EXIT_FAILURE);
    }
    streampos place = rec*sizeof pl;
    finout.seekg(place);
    if(finout.fail())
    {
        cout << "Seek error.\n";
        exit(EXIT_FAILURE);
    }
    finout.read((char*)&pl,sizeof pl);
    cout << "Your choose:\n";
    cout << rec << ": "
         << setw(LIM) << pl.name
         << setw(12) << setprecision(0) << pl.population
         << setw(6) << setprecision(2) << pl.g << endl;
    if(finout.eof())
    finout.clear();

    cout << "Enter the planet name: ";
    cin.get(pl.name,LIM);
    eatline;
    cout << "Enter the population: ";
    cin >> pl.population;
    cout << "Enter the g: ";
    cin >> pl.g;
    
    finout.seekp(place);
    finout.write((char*)&pl,sizeof pl);
    if(finout.fail())
    {
        cerr << "Write error.\n";
        exit(EXIT_FAILURE);
    }

    cout << "New content: \n";
    ct = 0;
    finout.seekg(0);
    while (finout.read((char*)&pl,sizeof pl))
    {
        cout << ct++ << ": "
             << setw(LIM) << pl.name
             << setw(12) << setprecision(0) << pl.population
             << setw(6) <<setprecision(2) << pl.g << endl;
    }
    finout.close();
    cout << "Done\n";
    cin.get();
    cin.get();
    return 0;
}