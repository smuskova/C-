#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int k; cin>>k;
    int ob=0;

    while(k!=0)
    {
        ob=ob*10+(k%10);
        k=k/10;
        cout<<k;


    }


 return 0;
}
