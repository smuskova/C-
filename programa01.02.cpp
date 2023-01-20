#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main ()
{
    char ch;
    system("cls");
    do
    {
        cout<<"\n\n\n\t\t Glavno menu\n";
        cout<<"\t\t 1.Pravougulnik\n";
        cout<<"\t\t 2.Krug\n";
        cout<<"\t\t 3.Triugulnik\n";
        cout<<"\t\t 4.Izhod\n";
        cout<<"Vshiat izbor:";
        cin>>ch;
        system("cls");
        switch(ch)
        {
        case '1':
        {
            double a,b;
            cout<<"a=\n"<<"b=";
            cin>>a>>b;
            cout<<"P="<<2*a+2*b<<endl;
            cout<<"S="<<a*b<<endl;
            break;
        }
        case '2':
        {
            double r;
            cout<<"r=";
            cin>>r;
            cout<<"P="<<2*r<<endl;
            cout<<"S="<<2*r<<endl;
            break;
        }
        case '3':
        {
            double a,b,c;
            cout<<"a="<<"b="<<"c=";
            cin>>a>>b>>c;
            cout<<"P="<<a+b+c<<endl;
            int k=(a+b+c)/2;
            cout<<"S="<<sqrt(k*(k-a)*(k-b)*(k-c))<<endl;
            break;
        }
        }system("pause");

    } while(ch!='4');
        return 0;
    }
