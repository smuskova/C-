#include<iostream>
#include<cmath>
using namespace std;
void kvadratno(double a,double b, double c, double &x, int &r)
{


    if(a==0)
    {

              if(b==0)
        {
            if(c==0)
            {
                r=2;
            }
            else
            {

                r=0;
            }
        }
        else
        {
            r=1;
            x=-(c/b);

        }
    }
    else
    {
        double D=(b*b-4*a*c);
        if(D<0)
        {
            r=0;
        }
        else
        {
            double x1=(-b+sqrt(D))/(2*a);
            double x2=(-b-sqrt(D))/(2*a);
            ;
        }
    }
}
int main ()
{
    double a,b,c,x;
    int r;
    for(int i=1; i<=10; i++)
    {
        cout<<"a="; cin>>a;

        cout<<"b="; cin>>b;
        cout<<"c="; cin>>c;
        kvadratno(a,b,c,x,r);
        if(r==0)
        {
            cout<<"n.r."<<endl;
        }
        else
        {
            if(r==2)cout<<"vsqko X e r-e\n";
            else
            {
                int k1=sqrt(x);
                int k2=sqrt(x);
                int S=k1+k2;
                cout<<S<<endl;
            }
        }
    }

    return 0;
}
