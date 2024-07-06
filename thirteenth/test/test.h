#ifndef TEST_H_
#define TEST_H_
#include<iostream>

class ABC
{
    private:
    char mode;
    public:
    ABC(char m);
    ABC(const ABC & a);
    ABC(){mode='0';};
    virtual ~ABC(){};
    virtual void View();
    ABC & operator=(const ABC &);
    friend std::ostream & operator <<(std::ostream & os,
                                    const ABC & rs);
};

class baseDMA:public ABC
{
    private:
    char * label;
 

    public:
    baseDMA(const char * l ,char m);
    baseDMA(const char * l ,const ABC & a);
    baseDMA(const baseDMA & bs);
    baseDMA();
    ~baseDMA(){delete [] label;};
    baseDMA & operator=(const baseDMA & rs);
    void View();
    friend std::ostream & operator <<(std::ostream & os,
                                    const baseDMA & rs);
};


class lacksDMA:public ABC
{
    private:
      enum{COL_LEN =40};
      char color[COL_LEN];
    public:
      lacksDMA(const char*c="blank",char m='0');
      lacksDMA(const char * c,const ABC & a);
      lacksDMA(const lacksDMA & ls);
      lacksDMA();
      ~lacksDMA(){};
      void View();
      lacksDMA & operator=(const lacksDMA & ls);
      friend std::ostream & operator <<(std::ostream & os,
                                        const lacksDMA &rs);
};

// derived class with DMA
class hasDMA:public ABC
{
    private:
      char * style;
      int cc;
    public:
      hasDMA(const char * s,int cc,char m );
      hasDMA(const char * s,int cc,const ABC & a);
      hasDMA(const hasDMA  & hs);
      hasDMA();
      ~hasDMA(){delete [] style;};
      void View();
      hasDMA & operator=(const hasDMA &);
      friend std::ostream & operator<<(std::ostream &,const hasDMA & rs);
};

#endif