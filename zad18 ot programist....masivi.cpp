#include<bits/stdc++.h>
using namespace std;
void read(int a[], int n)
{
    for(int i=0;i<=n-1;i++)
    {
        cin>>a[i];
    }
}
void tri(int a[], int n)
{
    for(int i=0;i<=n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            a[j]-a[i];
        }
    }
}
int main ()
{int a[50];
int n; cout<<"n="; cin>>n;
cout<<"vuvedete chisla po vash izbor:\n";
read(a,n);

tri(a,n);
cout<<endl;



 return 0;
}
