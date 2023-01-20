#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int a,b;
    cin>>a>>b;
    int p=a*b;
    int x;
    while(a!=b)
    {
        if(a<b)
        {
            x=a;
            a=b;
            b=x;
        }
        else
        {
            if(b!=0)
            {
                int ost=a%b;
                a=b;
                b=ost;

            }
            else
            {
                cout<<"nok"<<p/a<<endl;
            }
        }
    }
    return 0;
}
