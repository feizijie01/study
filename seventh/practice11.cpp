#include<iostream>     //收集保存学生资料，展示资料
using namespace std;
const int SLEN=30;
struct student{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

//getinfo() has two arguments: a pointer to the first element of
//an array of student structures and an int representing the 
//number of elements of the array. The function solicits and 
// stores data about students. It terminates input upon filling
// the array or upon encountering a blank line for the student
// name. The function returns the actual number of array elements
// filled.

int getinfo(student pa [],int n);

//display1() takes a student structure as an argument
// and displays its contents
void display1(student st);

//display2() takes the address of student structure as an
// arguments and displays the contents of the structures
void display2(const student*ps);

//display3() takes the address of the first element of an array
//of student structures and the number of array elements as
//arguments and displays the contents of the structures
void display3(const student pa[],int n);

int main()
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;
    while(cin.get()!='\n')
    continue;
    
    student*ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu,class_size);
    for(int i=0;i<entered;i++)
    {
       display1(ptr_stu[i]);
       display2(&ptr_stu[i]);
    }
    display3(ptr_stu,entered);
    delete [] ptr_stu;
    cout << "Done!\n";
    cin.get();
    cin.get();
    
    return 0;
}

int getinfo(student pa [],int n)
{   
    int i=0;
    cout << "Please enter the students's information: "<< endl;
    while(i<n)
    {
        cout << i+1 << ".fullname: " ;
        cin.getline(pa[i].fullname,SLEN);
        if((pa[i].fullname)[0] == ' ')
        break;
        
        cout << i+1 << ".hobby: ";
        cin.getline(pa[i].hobby,SLEN);
        cout << i+1 << ".ooplevel: ";
        cin >> pa[i].ooplevel;
        cin.get();
        cout << endl;
        i++;
    }
    return i;
}

void display1(student st)
{
    cout << st.fullname << endl;
    cout << st.hobby << endl;
    cout << st.ooplevel << endl << endl;
}

void display2(const student*ps)
{
    cout << ps->fullname << endl;
    cout << ps->hobby << endl;
    cout << ps->ooplevel << endl << endl;
}

void display3(const student pa [],int n)
{
   int i=0;
   while(i<n)
   {
    cout << pa[i].fullname << endl;
    cout << pa[i].hobby << endl;
    cout << pa[i].ooplevel << endl << endl;
    i++;
   }
}
