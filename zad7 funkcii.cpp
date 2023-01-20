#include<iostream>
#include<cmath>
using namespace std;
double xy(double x, int y)
{
    double x1=1;
    for(int i=1; i<=y; i++)
    {
        x1=x*x1;
    }
    return x1;
}
int main ()
{
    int a,b,k,s;
    cin>>a>>b>>k>>s;
    int u=a+b;
    if(k<s){swap(k,s);} int t=k-s;
    cout<<xy(u,t)<<endl;

    return 0;
}
