#include<iostream>
using namespace std;
int main ()
{
   int a,b,swap;
   cout<<"a=5";
   cin>>a;
   cout<<"b=3";
   cin>>b;
   swap=a;
   a=b;
   b=swap;
   cout<<"a=5"<<a<<endl;
   cout<<"b=3"<<b<<endl;

   return 0;
}
