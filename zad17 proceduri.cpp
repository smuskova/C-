#include<iostream>
#include<cmath>
using namespace std;
void sld(int &d, int &m, int &g)
{
    int sld;
    switch(m)
    {case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
    if (d<31)d++;
    else
    {
        d=1;
        m++;
    }
    if (m=12)
    {
        m=1;
        g++;
        d=1;
    }
case 4:
case 6:
case 9:
case 11:
    if (d<30)d++;
    else
    {
        d=1;
        m++;
    }
case 2:
    if(g%4==0 and (g%100!=0 or g%400==0)) sld=29;
    else
    {
        sld=28;
    }
    if(sld==29)
    {
        if(d<29)d++;
        else
        {
            d=1;
            m++;
        }
    }
    if(sld==28)
    {
        {
            if(d<28)d++;
            else
            {
                d=1;
                m++;
            }
        }

    }
    }
}
    int main ()
    {
        int d,m,g;
        cin>>d>>m>>g;
        int n;
        cin>>n;
        for(int i; i<=n; i++) {sld(d,m,g);}
        cout<<d<<"/"<<m<<"/"<<g<<endl;

        return 0;
    }
