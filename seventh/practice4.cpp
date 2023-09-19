#include<iostream>
using namespace std;
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void show(box box1);
void getvolume(box*pb1);
int main()
{
box box1;
box*pb1=&box1;
cout << "Please enter the information of the box: " << endl;
cout << "Name: ";
cin >> box1.maker;
cout << "height: ";
cin >> box1.height;
cout << "width: ";
cin >> box1.width;
cout << "length: ";
cin >> box1.length;
cout << "We will calculate the volume by your information." << endl;
getvolume(pb1);
cout << "All the information is here: " << endl;
show(box1);
cin.get();
cin.get();
return 0;
}
void show(box box1)
{
    cout << box1.maker << endl;
    cout << box1.height << endl;
    cout << box1.width << endl;
    cout << box1.length << endl;
    cout << box1.volume << endl;
}
void getvolume(box *pb1)
{
   pb1->volume=pb1->height*pb1->length*pb1->width;
}