#include<iostream>
#include<cmath>
using namespace std;
void nod(int a,int b)
{
    while(b!=a){int ost=a%b; a=b;b=ost;}
}

void F(double x, int f)
{
    for(int x=2; x<=3; x=x+0.1)
    {
        int f=pow(x+1,3)+1/pow(x-1,2);
        nod(pow(x+1,3),pow(x-1,2));
    }
}
int main ()
{

for(int x=2; x<=3; x=x+0.1){int f;
F(x,f);}
    return 0;
}
