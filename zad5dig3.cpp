#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    for(int i=100; i<=999; i++)
    {
        int s=0;
        s=s+i%10;i=i/10;

        if(s==n)
        {
            int br=0;
            br=br+1;
            cout<<br;
        }
    }

    return 0;
}
