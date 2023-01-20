#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    while(n!=0)
    {
        int h=n/1000;
        int s=n/100%10;
        int d=n/10%10;
        int e=n%10;
        cout<<h<<s<<d<<e<<endl;
    }
    return 0;
}
