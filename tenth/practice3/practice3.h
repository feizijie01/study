#ifndef PRACTICE3_H_
#define PRACTICE3_H_
const int Len= 40;
struct golf
{
    char fullname[Len];
    int handicap;
};

class Golf{
    private:
    char name[Len];
    int handi;
    public:
    Golf(const char*fn,int h);
    Golf();
    int setgolf();
    void showgolf();
};
#endif