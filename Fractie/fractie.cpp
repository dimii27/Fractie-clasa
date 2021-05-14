#include "fractie.h"
#include <iostream>
void Fractie::SetNumarator(int x)
{
    a=x;
}
void Fractie::SetNumitor(int y)
{
    b=y;
}
void Fractie::Simplifica()
{
    int x=a,y=b,r;
    while(y)
    {
        r=x%y;
        x=y;
        y=r;
    }
    a=a/x;
    b=b/x;
}
void Fractie::Afiseaza()
{
    std::cout<<a<<"/"<<b<<"\n";
}
Fractie::Fractie(int x,int y)
{
    a=x;
    b=y;
}
Fractie::Fractie(Fractie &f)
{
    a=f.a;
    b=f.b;
}
