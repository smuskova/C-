#include<bits/stdc++.h>
using namespace std;
void readerr (int a[], int n)

{
    for(int i=0; i<=n-1; i++)
    {
        int b;
        cin>>b;
        a[i] = b;
    }
}
bool dali(int a[], int n)
{
    for(int i=0; i<=n-1;i++)
    {
        for(int j=i+1; j<=n-1;j++)
        {
            if(a[i]==a[j])return false;
        }
    }return true;
}
int main ()
{cout<<"n=";
int n; cin>>n;
int a[100];
readerr(a,n);
if(dali(a,n)){cout<<"da";}
else{cout<<"ne";}

 return 0;
}
