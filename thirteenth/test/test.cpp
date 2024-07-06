#include"test.h"
#include<iostream>
#include<cstring>

//base
ABC::ABC(char m)
{
    mode=m;
}
ABC::ABC(const ABC & a)
{
    mode=a.mode;
}
   


ABC & ABC::operator=(const ABC & a)
{ 
    mode=a.mode;
    return *this;
}

   std::ostream & operator <<(std::ostream & os,
                                    const ABC & a)
{   
    os << "Mode: " << a.mode << std::endl;
    return os;
}

 void ABC::View()
 {
    std::cout << *this <<std::endl;   //试试用 cout << "Mode: " << mode ;
 }

// mode a

baseDMA::baseDMA(const char * l,char m):ABC(m)
{   
    label=new char[strlen(l)+1];
    strcpy(label,l);
    
}
baseDMA::baseDMA(const char * l ,const ABC & a):ABC(a)
{
    label=new char[strlen(l)+1];
    strcpy(label,l);
   
}
baseDMA::baseDMA(const baseDMA & rs):ABC(rs)
{   
    label=new char[strlen(rs.label)+1];
    strcpy(label,rs.label);
    
}

baseDMA::baseDMA():ABC('0')
{
    label=0;
    
};

baseDMA & baseDMA::operator=(const baseDMA & rs)
{   
    if(this==&rs)
    return *this;
    ABC::operator=(rs);
    delete [] label;
    label=new char[strlen(rs.label)+1];
    strcpy(label,rs.label);
  
    return *this;
}

std::ostream & operator <<(std::ostream & os,const baseDMA & rs)
{
    os<<(ABC)rs << std::endl;
    os << "Label: " << rs.label << std::endl;
    return os;
}

void baseDMA::View()
 {
    std::cout << *this << std::endl;
 }

// mode b
  lacksDMA::lacksDMA(const char*c,char m):ABC(m)
  {
    strcpy(color,c);
  }
  lacksDMA::lacksDMA(const char * c,const ABC & a):ABC(a)
  {
    strcpy(color,c);
  }
      
  lacksDMA::lacksDMA(const lacksDMA & ls):ABC(ls)
  {
    strcpy(color,ls.color);
  }

  lacksDMA::lacksDMA():ABC('0')
  {
    strcpy(color,"blank");
  }
 
  lacksDMA & lacksDMA::operator=(const lacksDMA & ls)
  { 
    if(this==&ls)
    return *this;
    strcpy(color,ls.color);
    ABC::operator=(ls);
    return *this;
  }

  std::ostream & operator <<(std::ostream & os,
                              const lacksDMA &rs)
  {
    os << (ABC)rs << std::endl;
    os << "Color: " << rs.color << std::endl;
    return os;
  }

  void lacksDMA::View()
 {
  std::cout << *this << std::endl;
 }

  // mode c
  hasDMA::hasDMA(const char * s,int c0,char m ):ABC(m)
  {
    style=new char[strlen(s)+1];
    strcpy(style,s);
    int cc=c0;
  }

  hasDMA::hasDMA(const char * s,int c0,const ABC & a):ABC(a)
  {
    style=new char[strlen(s)+1];
    strcpy(style,s);
    cc=c0;
  }

  hasDMA::hasDMA(const hasDMA  & hs):ABC(hs)
  {
    style=new char[strlen(hs.style)+1];
    strcpy(style,hs.style);
    cc=hs.cc;
  }

  hasDMA::hasDMA():ABC('0')
  {
    style=0;
    cc=0;
  }

  hasDMA & hasDMA::operator=(const hasDMA & rs)
  {
    if(this==&rs)
    return *this;
    delete [] style;
    ABC::operator=(rs);
    style=new char[strlen(rs.style)+1];
    strcpy(style,rs.style);
    cc=rs.cc;
    return *this;
  }
    
    std::ostream & operator<<(std::ostream & os,const hasDMA & rs)
    {
        os << (ABC)rs << std::endl;
        os << "Style: " << rs.style << std::endl;
        os << "CC: " << rs.cc << std::endl;
        return os;
    }

      void hasDMA::View()
 {
    std::cout<< *this << std::endl;
 }