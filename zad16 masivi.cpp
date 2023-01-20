#include<bits/stdc++.h>
using namespace std;
void readerr (char a[], int n)

{
    for(int i=0; i<=n-1; i++)
    {
       cin>>a[i];
    }
}
bool dali(char a[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=1; j<=i;j++)
            if(a[i]!=a[j]) return false;
    }
    return true;
}
int main ()
{  char a[50];
cout<<"n=";
int n; cin>>n;
readerr(a,n);
if(dali(a,n))
cout<<"simetrichno e"<<endl;

 return 0;
}
