#include<bits/stdc++.h>
using namespace std;
void readerr (int a[], int n)

{
    for(int i=0; i<=n-1; i++)
    {
       cin>>a[i];
    }
}
int main ()
{int n; cin>>n;
int a[n];
readerr(a,n);
int max=a[0],min=a[0];
for(int i=0;i<n;i++)
{
    if(max<a[i]) max=a[i];
    if(min>a[i]) min=a[i];

}
cout<<"max="<<max<<"\nmin="<<min;

 return 0;
}
