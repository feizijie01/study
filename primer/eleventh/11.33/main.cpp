#include<iostream>
#include<string>
#include<map>
#include<fstream>
#include<sstream>
#include<stdexcept>
using namespace std;
map<string,string>BuildMap(ifstream & guizewen)
{   
    string word;
    string text;
    map<string,string>guize;
    while(guizewen >> word && getline(guizewen,text))
    {   
        if(text.size()>1)
        guize[word]=text.substr(1);
        else
        throw runtime_error("no rule for "+word);
    }

    return guize;
}

const string & trans(const map<string,string> & guize,const string & s)
{
    auto p=guize.find(s);
    if(p!=guize.end())
    return p->second;
    else
    return s;
}

void TransForm(ifstream & yuanwen,ifstream & guizewen)
{
    auto guize=BuildMap(guizewen);
    string text;
    while(getline(yuanwen,text))
    {   
        bool firstword=1;
        string word;
        istringstream wenliu(text);
        while(wenliu >> word)
        {
            if(firstword)
            firstword=0;
            else
            cout << " ";
            cout << trans(guize,word);
        }
        cout << endl;
    }
    
    
}

int main()
{
    ifstream gui,wen;
    gui.open("guize.txt");
    wen.open("wenben.txt");
    try {
        TransForm(wen, gui);
    } catch (const runtime_error &e) {
        cerr << "错误: " << e.what() << endl;
    }
    

    gui.close();
    wen.close();
    cin.get();
    cin.get();
    return 0;
}