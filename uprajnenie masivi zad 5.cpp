#include<bits/stdc++.h>
using namespace std;
void read(int a[], int n)

{
    for(int i=0; i<=n-1; i++)
    {
   a[i]=rand()%15;
    }
}
int main ()
{int a[50]; int n; cin>>n;
read(a,n);
for(int i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;

 return 0;
}
