#include "fractie.h"

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
    while(y){r=x%y;x=y;y=r;}
    a=a/x;
    b=b/x;
}
void Fractie::Afiseaza()
{
    cout<<a<<"/"<<b<<endl;
}
