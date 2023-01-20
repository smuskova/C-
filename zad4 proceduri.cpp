#include<iostream>
#include<cmath>
using namespace std;
int nod(int a, int b)
{
    while(b!=0)
    {
        int ost=a%b;
        a=b;
        b=ost;
    }
    return a;
}

void sukrati(int &a,int &b)
{
    int k=nod(a,b);
    a=a/k;
    b=b/k;


}
void razlika(int a, int b, int c, int d, int &ch, int &zn)
{
ch=a*d-b*c;
zn=b*d;
sukrati(ch,zn);
}
void sbor(int a, int b, int c, int d, int &ch, int &zn)
{
ch=a*d+b*c;
zn=b*d;
sukrati(ch,zn);
}
void proizvedenie(int a, int b, int c, int d, int &ch, int &zn)
{
ch=(a*d)*(b*c);
zn=b*d;
sukrati(ch,zn);
}
void delenie(int a, int b, int c, int d, int &ch, int &zn)
{
ch=(a*d)/(b*c);
zn=b*d;
sukrati(ch,zn);
}

int main ()
{
    int ch,zn;
razlika(6,5,1,5,ch,zn);cout<<ch<<"/"<<zn<<endl;
sbor(6,5,1,5,ch,zn);cout<<ch<<"/"<<zn<<endl;
proizvedenie(6,5,1,5,ch,zn);cout<<ch<<"/"<<zn<<endl;
delenie(6,5,1,5,ch,zn);
cout<<ch<<"/"<<zn<<endl;
 return 0;
}
