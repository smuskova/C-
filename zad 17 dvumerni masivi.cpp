#include<bits/stdc++.h>
using namespace std;
void reader(int a[][10], int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
}
void writer(int a[][10], int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
    }
}
int minEl(int a[][10], int n, int m)
{
    for(int i=0;i<n;i++)
    {
        int mini=a[i][0];
        int red;
        int stulb;
        for(int j=0; j<m;j++)
        {
          if(a[i][j]<mini) mini=a[i][j];
          red=i; stulb=j;
        } cout<<"minel="<<mini<<"\n"<<red<<" "<<stulb<<endl;
   return mini;
   }
}
int main ()
{ int a[10][10];
int n,m; cin>>n>>m;
reader(a,n,m);
writer(a,n,m);
minEl(a,n,m);

 return 0;
}
