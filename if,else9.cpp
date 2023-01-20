#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int a,b,c;
    cin>>a>>b>>c;
    int min=a;
    if(b<min and b<c and b<a) {cout<<b;}
    if(c<min and c<b and c<a) {cout<<c;}
    if(a<min and a<c and a<b) {cout<<a<<endl;}
 return 0;
}
