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
    for(int i=0; i<=n-1; i++)
    {
        if(a[i]==0) return true;
    }
    return false;
}
int main ()
{ cout<<"n=";
    int n;cin>>n;
    int a[100];
    readerr(a,n);
    if(dali(a,n))
    {
        cout<<"da";
    }
    else
    {
        cout<<"ne";
    }

    return 0;
}
