#include<iostream>
#include"golf.h"

using std::cout;
using std::cin;
using std::endl;

main()
{
    const int people = 10;
    golf array[people];
    cout << "Please enter the ten-people's data one by one: " << endl;
    int i=0;
    while(i<people)
      {
        if(setgolf(array[i])==0)
        break;
        i++;
      };
    for(int j=0;j<i;j++)
    showgolf(array[j]);
    cin.get();
    cin.get();
    return 0;
}