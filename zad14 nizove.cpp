#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string a="265";
    string b="1594";
    int n=a.size(); int c=0;
    int m=b.size(); int ost=0;
    if(n<m){string k(m-n,'0');}
    for(int i='5';i<n;i++)
    {
        for(int j='4';j<m;j++)
            ost=a[i]-'0'+b[j]-'0'+ost;
        c=(ost%10+'0')+c; ost/=10;
    }
 return 0;
}
