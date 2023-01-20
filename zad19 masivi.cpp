#include<bits/stdc++.h>
using namespace std;
void readerr (int a[], int n)

{
    for(int i=0; i<=n-1; i++)
    {
       cin>>a[i];
    }
}
bool dali(int a[], int b[], int n, int k )
{   int br;
    for(int i=0; i<=n-1; i++)
    {
        for(int j=0; j<=k-1; j++)
            if(a[i]==b[j]) return true;
    }return false;
}
int main ()
{ cout<<"n="; int n; cin>>n;
  cout<<"k="; int k; cin>>k;
  int a[50];
  int b[50];
  cout<<"vuvedete chisla za n:"<<endl;
  cout<<"vuvedete chisla za k:"<<endl;
  int br=0;
  readerr(a,n);
  readerr(b,k);
  if(dali(a,b,n,k)) br++;
  cout<<"broqt na ravetvata e:"<<br<<endl;



 return 0;
}
