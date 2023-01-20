#include<iostream>
#include<cmath>
using namespace std;
int nod(int a, int b)
{
    if(a>b)swap(a,b);
    while(b!=0)
    {
        int ost=a%b;
        a=b;
        b=ost;
    }
    return a;
}
int main ()
{
  double ch,zn; cin>>ch>>zn;
  double suk=ch/zn;
  cout<<suk<<endl;
 return 0;
}
