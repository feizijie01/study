#include"emp.h"
// abstr_emp methods
void abstr_emp::ShowAll()const
{
    cout << "Job: " << job << endl ;
}

void abstr_emp::SetAll()
{   
    
    cout << "Please enter  FirstName: ";
    cin >> fname;
    cout << "Please enter  LastName: ";
    cin >> lname;
    cout << "Please enter  job: ";
    cin >> job;
}

abstr_emp::~abstr_emp()
{
    cout << "Gone.\n\n";
}

ostream & operator<<(ostream & os , const abstr_emp & e)
{   
    os << "First name: " << e.fname << endl;
    os << "Last name: " << e.lname ;
    return os;
}

// employee methods
void employee::ShowAll() const
{
    abstr_emp::ShowAll();
    cout << endl;
}

void employee::SetAll()
{
    abstr_emp::SetAll();
}

// manager methods
void manager::ShowAll()const
{
    abstr_emp::ShowAll();
    cout << "Inchargeof: " << InChargeOf() << endl;
    cout << endl;
}

void manager::SetAll()
{
    abstr_emp::SetAll();
    cout << "Enter Inchargeof: ";
    cin >> InChargeOf();
}

// fink methods
void fink::ShowAll()const
{   
    abstr_emp::ShowAll();
    cout << "Reports to : "<< ReportsTo() << endl;
    cout << endl;
}

void fink::SetAll()
{
    abstr_emp::SetAll();
    cout << "Enter whom fink reports to: ";
    cin >> ReportsTo();
}

//highfink methods
void highfink::ShowAll()const
{
    abstr_emp::ShowAll();
    cout << "InchargeOf: " << InChargeOf() << endl;
    cout << "Reports to: " << ReportsTo() << endl;
    cout << endl;
}

void highfink::SetAll()
{
    abstr_emp::SetAll();
    cout << "Enter Inchargeof: ";
    cin >> InChargeOf();
    cout << "Enter whom fink reports to: ";
    cin >> ReportsTo();
}