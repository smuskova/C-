#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int n;   cin>>n;
    int ob=0;

    while(n!=0)
    {
        ob=ob*10+(n%10);
        n=n/10;
cout<<n;
    }
 return 0;
}
