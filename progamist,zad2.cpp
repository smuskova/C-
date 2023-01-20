#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    for(int a=1; a<=n; a++)
    {
        for(int b=1; b<=n; b++)
        {
            for(int c; c<=n; c++)
            if(a*a+b*b==c*c)
            {
                cout<<a<<" "<<b<<" "<<c;
            }

        }


    }

    return 0;
}
