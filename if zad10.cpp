#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x;

    if (a>b)
    {
        int x=a;
        a=b;
        b=x;

    }
    if (a>c)
    {
        int x=a;
        a=c;
        c=x;
    }
    if (b>c)
    {
        int x=b;
        b=c;
        c=x;
    }
    cout<<a<<" "<<b<<" "<<c;

    return 0;
}
