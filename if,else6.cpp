#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    float a,b,c;
    cin>>a>>b>>c;
    if(a>0 and b>0 and c>0)
    {

         int P=(a+b+c)/2;
         int S=sqrt(P*(P-a)*(P-b)*(P-c));
         cout<<P<<" "<<S;

    }
    else {cout<<"nqma takuv triugulnik"<<endl;}
    return 0;
}
