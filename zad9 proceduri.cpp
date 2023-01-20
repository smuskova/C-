#include<iostream>
#include<cmath>
using namespace std;
void nod(int a,int b)
{
    while(b!=0){int ost=a%b; a=b;b=ost;}
}
void F(int x, int &n)
{
    for(int x=1; x<=n; x++)
    {
        int f=pow(x,2)+1/pow(x,2); nod(x);
    }
}
int main ()
{
    int n;
    cin>>n;
    for(int x=1; x<=n; x++)
    {F(x,n);

 }
    return 0;
}
