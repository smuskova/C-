#include<bits/stdc++.h>
using namespace std;
void reader2(int a[][10], int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
}
void writer2(int a[][10],int n, int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<a[i][j]<<" ";
            cout<<endl;
    }
}
void suma(int a[][10], int n, int  m)
{ int s=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            if(i!=j and i+j!=n-1) s=s+a[i][j];
    } cout<<"suma="<<suma;
}
int main ()
{ int a[10][10];
int n,m; cin>>n>>m;
reader2(a,n,m);
writer2(a,n,m);
suma(a,n,m);

 return 0;
}
