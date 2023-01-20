#include<bits/stdc++.h>
using namespace std;
void readerr (int a[], int n)

{
    for(int i=0; i<=n-1; i++)
    {
       cin>>a[i];
    }
}
void suma(int a[], int n)
{   int br=0;
     for(int i=0;i<=n-1;i++)
      {
         if(a[i]/1==0 and a[i]/a[i]==0)br++;

      }

}
int main ()
{int n; cin>>n;
int a[10];
readerr(a,n);
suma(a,n);


 return 0;
}
