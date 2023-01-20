#include<bits/stdc++.h>
using namespace std;
int main ()
{ string s="";
int g,m,d,pol;
 int n=s.size();
 if(n==10)
 {  g=s.substr(0,2);
    m=s.substr(2,2);
    d=s.substr(4,2);
    pol=s[9];
    if(g<1900) m+=20;
    else
        {
            if(g>=2000)m+=40;
            cout<<g<<"/"<<m<<"/"<<d;
        }

     if(pol%2==0) cout<<"vie ste muj";
     else cout<<"vie ste jena"<<endl;


 }
    else cout<<"greshno EGN";
 return 0;
}
