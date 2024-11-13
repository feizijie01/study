#include"practice4.h"
//person
void Person::Show()
{
    cout << "First name: " << fn << endl;
    cout << "Last name: " << ln << endl;
}

//Gunslinger
void Gunslinger::Show()
{
    Person::Show();
    cout << "Time: " << time << endl;
    cout << "Kehen: " << kehen << endl;
}

//Card
ostream & operator<<(ostream & os , const Card & c)
{
    os << "Pokevalue: " << c.poke << endl;
    os << "FlowerColor: " << c.flowercolor << endl;
    return os;
}

//Badude
int Badude::Gdraw()
{
    return Gunslinger::Draw();
}

Card & Badude::Cdraw()
{
    return PokerPlayer::Draw();
}

void Badude::Show()
{
    cout << "Time: " << Gdraw() << endl;
    cout << Cdraw() << endl;
}