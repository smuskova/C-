#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    bool razlichni=false;


    for(int i=100; i<=n; i++)
    {
        int s=i/100;
        int d=i/10%10;
        int e=i%10;
        if(s!=d and d!=e and s!=e)
        {
            razlichni=true;
        }

        if(razlichni=true)
        {
            int br;
            br=br+1;
            cout<<br<<" ";
        }

    }

    return 0;
}
