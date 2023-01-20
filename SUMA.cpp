#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int k;
    cin>>k;
    while(k!=0)
    {
        int e=k%10;
        int d=k/10%10;
        int s=k/100;
        int suma=e+d+s;
        cout<<"ssuma="<<suma<<endl;
    } break;




    return 0;
}
