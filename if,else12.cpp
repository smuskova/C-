#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    int a;
    cin>>a;
    int h=a/1000;
    int s=a/100%10;
    int d=a%100/10;
    int e=a%10;
    if((h+s)==(d+e)){ cout<<"shtastliv nomer";}
    else {cout<<"tujen nomer"<<endl;}

 return 0;
}
