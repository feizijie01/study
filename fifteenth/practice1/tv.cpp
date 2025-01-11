//tv.cpp -- methods for the Tv class (Remote methods are inline)
#include<iostream>
#include"tv.h"
using std::cout,std::endl,std::cin;
bool Tv::volup()
{
    if(volume<MaxVal)
    {
        volume++;
        return true;
    }
    else
    return false;
}

bool Tv::voldown()
{
    if(volume > MinVal)
    {
        volume--;
        return true;
    }
    else
    return false;
}

void Tv::chanup()
{
    if(channel < maxchannel)
    channel++;     
    
    else 
    channel=1;
}

void Tv::chandown()
{
    if(channel>1)
    channel++;
    else
    channel=maxchannel;
}

void Tv::settings()const
{
    cout << "TV is " << (state==Off?"Off":"On") << endl;
    if(state == On)
    {
        cout << "Volume setting = " << volume << endl;
        cout << "Channel setting = " << channel << endl;
        cout << "Mode = " << (mode==Antenna?"Antenna":"Cable") << endl;
        cout << "Input = "<<(input == TV?"TV":"DVD") << endl; 
    }
}

void Tv::switchmoshi(Remote & r)
{
    if(ison())
    {
        r.moshi=(r.moshi==1?2:1);
        cout << "switch.\n";
    }
}

void Remote::xianshi()
{
 
    if(moshi==1)
    cout << "changgui\n";
    if(moshi==2)
    cout << "hudong\n";
}