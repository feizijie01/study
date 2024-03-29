#ifndef PRACTICE2_H_
#define PRACTICE2_H_
#include<string>
using std::string;
class Person
{
    private:
    static const int LIMIT = 25;
    string lname;   // Person's last name
    char fname[LIMIT];  // Person's first name
    public:
    Person() {lname = ""; fname[0]='\0';}   //#1
    Person(const string &ln, const char*fn = "Heyyou"); // #2
    // the following methods display lname and fname
    void show() const;   // first name lastname format
    void FormalShow() const ; // lastname, firstname format  
};
#endif
