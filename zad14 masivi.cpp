#include<bits/stdc++.h>
using namespace std;
void readerr (int a[], int n)

{
    for(int i=0; i<=n-1; i++)
    {
       cin>>a[i];
    }
}
void sortirane(int a[], int n)
{
    for(int i=1;i<=n-1;i++)
    {
        for(int j=0;j<n-i;j++)
            if(a[j]>a[j+1])
            swap(a[j], a[j+1]);
    }
}
int main ()
{int a[100];
int n; cin>>n;
readerr(a,n);
sortirane(a,n);

 return 0;
}
