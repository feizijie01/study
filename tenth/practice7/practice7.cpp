#include<iostream>
#include"practice7.h"
#include<string>
Plorg::Plorg(std::string p,int ci)
{
    name=p;
    CI=ci;
}
void Plorg::changeCi(int ci)
{
    CI=ci;
}

void Plorg::showplorg() const
{
    std::cout << "Plorg'name : " << name << std::endl;
    std::cout << "Plorg'CI : " << CI << std::endl;
}