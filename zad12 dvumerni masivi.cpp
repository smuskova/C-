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
bool dali(int a[][10],int n, int m)
{
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<m;j++)
            if(a[i][j]<0)return true;
    }return false;
}

int main ()
{int a[5][10];
int  n; cout<<"n="; cin>>n;
int m; cout<<"m="; cin>>m;
reader(a,n,m);
if(dali(a,n,m))cout<<"da";
else cout<<"ne";

 return 0;
}
