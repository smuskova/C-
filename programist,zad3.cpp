#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    for(int a; a<=n; a++)
    {
        for(int b; b<=n; b++)
        {
            for(int c; c<=n; c++)
            {
                if(a+b>c and a+c>b and b+c>a)

                {
                    cout<<a<<" "<<b<<" "<<c<<endl;
                }
            }
        }

    }



    return 0;
}
