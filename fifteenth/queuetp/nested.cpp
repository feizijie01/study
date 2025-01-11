//nested.cpp -- using a queue that has a nested class
#include<iostream>
#include<string>
#include"queuetp.h"

int main()
{
    using std::string,std::endl,std::cin,std::cout;
    QueueTp<string>cs(5);
    
    
    string temp;

    while(!cs.isfull())
    {
        cout << "Please enter ur name. U will be "
        "served in the order of arrival.\n"
        "name: ";
        getline(cin,temp);
        cs.enqueue(temp);
    }
    cout << "The queue is full. Processing begins!\n";

    while(!cs.isempty())
    {
        cs.dequeue(temp);
        cout << "Now processing " << temp << "...\n";
    }
    cin.get();
    cin.get();
    return 0;
}