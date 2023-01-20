#include<iostream>
#include<cmath>
using namespace std;
static double Factorial(double x)
{
    double factorial=1;
    for(int i=1; i<=x; i++)
    {
        factorial*=i;
    }
    return factorial;
}
int main ()
{ double a,b,c; cin>>a>>b>>c;
cout<<factorial*(a+b);
cout<<factorial*(c);
cout<<factorial*(a*b);


    return 0;
}
