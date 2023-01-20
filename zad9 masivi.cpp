#include<bits/stdc++.h>
using namespace std;
void readerr (int a[], int n)

{
    for(int i=0; i<=n-1; i++)
    {
       cin>>a[i];
    }
}
int func(int a[],int n, int x)
{
int br=0;
for(int i=0; i<=n; i++) {if(a[i]==x)br++;}
return br;
}
int main ()
{int n; cin>>n;
int a[100];
readerr(a,n);
int x; cin>>x;
cout<<x<<" se sreshta "<<func(a,n,x)<<"puti";

 return 0;
}
