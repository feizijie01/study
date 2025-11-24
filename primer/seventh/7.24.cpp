#include<iostream>
#include<string>
#include<ostream>
using namespace std;
class Screen{
    public:
    typedef string::size_type pos;
    Screen()=default;
    Screen(pos w,pos h):width(w),height(h),contents(w*h,' '){}
    Screen(pos w,pos h,char c)
    :width(w),height(h),contents(w*h,c){}

    char get()const{return contents[cursor];}
    Screen  move(pos x,pos y){cursor=x*width+y;return *this;};
    Screen  set(char c){contents[cursor]=c;return *this;}
    Screen  set(pos x, pos y,char c){contents[x*width+y]=c;return *this;}
    Screen display(ostream & os){do_display(os);return *this;}
    const Screen &display(ostream & os)const
    {do_display(os);return *this;}
    

    private:
    pos cursor=0;
    pos width=0,height=0;
    string contents;

    void do_display(ostream & os)const
    {os << contents;};
};

int main()
{
    Screen myScreen(5,5,'X');
    myScreen.move(4,0).set('#').display(cout);
    cout << "\n";
    myScreen.display(cout);
    cout << "\n";
    cin.get();
    cin.get();
    return 0;
}