#include<bits/stdc++.h>
using namespace std;
void readerr (int a[], int n)

{
    for(int i=0; i<=n-1; i++)
    {
       cin>>a[i];
    }
}
void suma(int a[], int b[], int n)
{
    for(int i=0; i<=n-1;i++)
    {
        for(int j=0;j<=n-1;j++)
          a[i]+b[j];
    }
}
int main ()
{cout<<"n=";
int n; cin>>n;
int a[3];readerr(a,n);
int b[3]; readerr(b,n);
suma(a,b,n);

 return 0;
}
