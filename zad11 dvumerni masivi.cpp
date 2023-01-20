#include<bits/stdc++.h>
using namespace std;
void reader(int a[][10], int n, int m)
{
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
}
bool dali(int a[][10],int n, int m, int x)
{
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<m;j++)
            if(a[i][j]==n and a[i][j]==m) return true;
    }return false;
}
int main ()
{ int a[5][10];
int  n; cout<<"n="; cin>>n;
int m; cout<<"m="; cin>>m;
reader(a,n,m);
int x; cout<<"x="; cin>>x;
if(dali(a,n,m,x)) cout<<"da";
else cout<<"ne";


 return 0;
}
