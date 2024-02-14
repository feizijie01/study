#ifndef PRACTICE1_H_
#define PRQCTICE1_H_
class StoneAndPounds
{
    private:
    enum{pounds_per_stone=14};
    int stone;
    double pounds;
    double yupounds;

    public:
    StoneAndPounds(double n);
    StoneAndPounds(int x,double y);
    StoneAndPounds(){};
    void show()const;
    StoneAndPounds operator*(double);
    friend StoneAndPounds operator*(double n,StoneAndPounds & s1);
};

#endif