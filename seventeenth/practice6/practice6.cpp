#include"emp.h"
//abstr_emp
void abstr_emp::SetAll()
{
    cout << "Please enter first name: ";
    getline(cin,this->fname);
    cout << "Please enter last name: ";
    getline(cin,this->lname);
    cout << "Please enter job: ";
    getline(cin,this->job);
}

void abstr_emp::ShowAll()const 
{
    cout << "Name: " << this->fname << " " << this->lname << endl;
    cout << "Job: "  << this->job << endl;
    
}

void abstr_emp::WriteAll(ofstream & fout)
{  
    fout <<  this->fname << endl;
    fout <<  this->lname << endl;
    fout <<  this->job << endl;
    fout << endl;
}

void abstr_emp::GetAll(ifstream & fin)
{   
    getline(fin,this->fname);
    getline(fin,this->lname);
    getline(fin,this->job);
}

abstr_emp::~abstr_emp(){}

//Employee
void Employee::SetAll()
{ 
   abstr_emp::SetAll();
}

void Employee::ShowAll()const
{
    abstr_emp::ShowAll();
    cout << endl;
}

void Employee::WriteAll(ofstream & fout)
{   
    fout << "1\n";
    abstr_emp::WriteAll(fout);
}

void Employee::GetAll(ifstream & fin)
{   
    fin.get();
    abstr_emp::GetAll(fin);
}

//Manager
void Manager::SetAll()
{
    abstr_emp::SetAll();
    cout << "Enter the people numbers incharge: ";
    cin >> this->inchargeof;
}

void Manager::ShowAll()const
{
    abstr_emp::ShowAll();
    cout << "Inchargeof: " << this->InChargeOf() << " " << " people.\n";
    cout << endl;
}

void Manager::WriteAll(ofstream & fout)
{   
    fout << "2\n";
    fout <<  this->inchargeof << endl;
    abstr_emp::WriteAll(fout);
}

void Manager::GetAll(ifstream & fin)
{
    fin >> this->inchargeof;
    fin.get();
    abstr_emp::GetAll(fin);
}

//Fink
void Fink::SetAll()
{
    abstr_emp::SetAll();
    cout << "Enter the people who report to: ";
    getline(cin,this->reporto);
}

void Fink::ShowAll()const
{
    abstr_emp::ShowAll();
    cout << "Reporto: " << this->reporto << endl << endl;
}

void Fink::WriteAll(ofstream & fout)
{   
    
    fout << "3\n";
    fout <<  this->reporto << endl;
    abstr_emp::WriteAll(fout);
}

void Fink::GetAll(ifstream & fin)
{   
    fin.get();
    getline(fin,this->reporto);
    abstr_emp::GetAll(fin);
}


//HighFink
void HighFink::SetAll()
{
    abstr_emp::SetAll();
    cout << "Enter the people numbers incharge: ";
    cin >> this->InChargeOf();
    cin.get();
    cout << "Enter the people who report to: ";
    getline(cin,this->Reportto()) ;
}

void HighFink::ShowAll()const
{
    abstr_emp::ShowAll();
    cout << "Inchargeof: " << this->InChargeOf() << " " << " people.\n" ;
    cout << "Reporto: " << this->Reportto() << endl << endl;
}

void HighFink::WriteAll(ofstream & fout)
{   
    fout << "4\n";
    fout << this->InChargeOf() << endl;
    fout <<  this->Reportto() << endl;
    abstr_emp::WriteAll(fout);
    
}

void HighFink::GetAll(ifstream & fin)
{   
    fin >> this->InChargeOf();
    fin.get();
    getline(fin,this->Reportto());  
    abstr_emp::GetAll(fin);  
}