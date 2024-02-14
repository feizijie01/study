#ifndef PRACTICE7_H_
#define PRACTICE7_H_
#include<string>

class Plorg
{
    private:
    std::string name;
    int CI;
    public:
    Plorg(std::string arr="Plorga",int ci=50);
    void changeCi(int);
    void showplorg() const;
};
#endif
