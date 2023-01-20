#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;
void fig(int &n)
{
    for(int i=1; i<=n; i++)
    {
        cout<<setw(2*n-i);


for(int j=1;j<=i;j++) cout<<j<<" ";
cout<<endl;
}
}
int main ()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        fig(i);
        cout<<setw(n-i);
    }


    return 0;
}
