#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    char ch;
    for(int i; i<=n; i++)
    {
        if(i>='A' && i<='Z')
        {
            cout<<char(ch=ch+32);
        }
        if(i>='a' && i<='z')
        {
            cout<<char(ch=ch-32);
        }
    }
    return 0;
}
