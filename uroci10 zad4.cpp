#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
    double x; cin>>x; int y=1;
    for(int i=122;i>=2;i=i-2) {y=(y*x)+i;}
    cout<<"y="<<y<<endl;
 return 0;
}
