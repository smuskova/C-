#include<bits/stdc++.h>
using namespace std;
void read(int a[],int n)
{
    for(int i=0; i<=n-1; i++)
    {
        cin>>a[i];
    }
}
bool dali(int a[], int n)
{
    for(int i=0; i<=n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]==a[j]) return true;
        }
    }
    return false;
}
int main()
{
    int a[100];
    int n;
    cout<<"n=";
    cin>>n;
    cout<<"vuvedete chisla po izbor: \n";
    int br=0;
    read(a,n);

    if(dali(a,n))
    {
        br++;
        cout<<"povtarq se:"<<dali(a,n)<<"\n broq na povtarqshtite e :"<<br;
    }
    else cout<<"nqma povtarqshti se"<<endl;


    return 0;
}
