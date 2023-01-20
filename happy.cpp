#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    while(a!=0)
    {
        int e=a%10;
        int d=a/10%10;
        int s=a/100%10;
        int h=a/1000;
        int lqvo=h+s;
        int dqsno=d+e;
        if(lqvo==dqsno)
        {
            cout<<"da";
        }
        else(cout<<"ne"<<endl);

        }

    return 0;
}
