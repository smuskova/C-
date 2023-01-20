#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
#include <string>

#include <cstdlib>

using namespace std;

int main()
{
    string a;
    getline(cin,a);
    int n=a.size();
    int g,m,d,r;
    string zodiq="";
    string region="";


        g=(a[0]-48)*10+a[1]-48;
        m=(a[2]-48)*10+a[3]-48;
        d=(a[4]-48)*10+a[5]-48;
        r=(a[6]-48)*100+(a[7]-48)*10+a[8]-48;
        if(m>=40)
        {
            g=g+2000;
            m=m-40;
        }
        else  if(m>12)
        {
            m=m-20;
            g=g+1800;
        }
       else g=g+1900;

       if(m==3 and d>=21 or m==4 and d<=20)
       {
            zodiq="oven";
       }
       if(m==4 and d>=21 or m==5 and d<=21)
       {
            zodiq="telec";
       }
       if(m==5 and d>=22 or  m==6 and d<=21)
       {
            zodiq=" bliznaci";
       }
        if(m==6 and d>=22 or m==7 and d<=22)
        {
            zodiq=" rak";
        }
        if(m==7 and d>=23 or m==8 and d<=23)
        {
            zodiq="luv";
        }
        if(m==8 and d>=24 or m==9 and d<=23)
        {
            zodiq=" deva";
        }
        if(m==9 and d>=24 or m==10 and d<=23)
        {
            zodiq=" vezni";
        }
        if(m==10 and d>=24 or m==11 and d<=22)
        {
            zodiq=" skorpion";
        }
        if(m==11 and d>=23 or m==12 and d<=21)
        {
           zodiq=" strelec";
        }
        if(m==12 and d>=22 or m==1 and d<=20)
        {
            zodiq=" kozirog";
        }
        if(m==1 and d>=21 or m==2 and d<=19)
        {
            zodiq=" vodolei";
        }
        if(m==2 and d>=20 or m==3 and d<=20)
        {
           zodiq=" ribbi";

        }
        if(r<=43) region="Blagoebgrad";
        if(r>43 and r<93) region="Burgas";
        if(r>93 and r<139) region="Varna";
        if(r>139 and r<169) region="Veliko Turnovo";
        if(r>169 and r<183) region=" Vidin";
        if(r>183 and r<217) region="Vraca";
        if(r>217 and r<233) region="Gabrovo";
        if(r>233 and r<281) region="Kurdjali";
        if(r>281 and r<301) region="Kiustendil";
        if(r>301 and r<319) region="LOvech";
        if(r>319 and r<341) region="Montana";
        if(r>341 and r<377) region="Pazardjik";
        if(r>377 and r<395) region="Pernik";
        if(r>395 and r<435) region="Pleven";
        if(r>435 and r<501) region="PLovdiv";
        if(r>501 and r<527) region="Razgrad";
        if(r>527 and r<555) region="Ruse";
        if(r>555 and r<575) region="Silistra";
        if(r>575 and r<601) region="Sliven";
        if(r>601 and r<623) region="Smolqn";
        if(r>623 and r<721) region="Sofiq grad";
        if(r>721 and r<751) region="Sofiq okrug";
        if(r>751 and r<789) region="Sara zagora";
        if(r>789 and r<821) region="Dobrich";
        if(r>821 and r<843) region="Turgovishte";
        if(r>843 and r<871) region="Haskovo";
        if(r>871 and r<903) region="Shumen";
        if(r>903 and r<925) region="Qmbol";
        if(r>925 and r<999) region=" neizvesten";




    cout<<"vie ste"<<" ";
    if((a[8]-'0')%2==0) cout<<"muj";
    else cout<<"jena";
    cout<<" "<<"roden na"<<" "<<d<<"."<<m<<"."<<g<<endl;
    cout<<"vie ste zodiq "<<" "<<zodiq<<endl;
    cout<<"vie ste roden v "<<" "<<region<<endl;

    return 0;

}
