#include<bits/stdc++.h>
using namespace std;

void fillArr(int a[][20], int n)
{
    int p=1, i=n-1, j=n-1;
    for(int k=1; k<=n;k++)
    {
        i=n-k;
        j=n-k;
        int d=j+k*2-1;
        for(int s=j; s<=d;s++){a[i][s]=p;p++;}
        for(int z=i+1; z<=d;z++){a[z][d]=p;p++;}
        for(int h=d-1;h>=j-1;h--){a[d][h]=p;p++;}
        for(int f=d-1;f>=i;f--){a[f][j-1]=p;p++;}

    }
}
void writer(int a[][20], int n)
{
    for(int i=0;i<n;i++)
    { for(int j=0;j<n;j++)    cout<<setw(4)<<a[i][j]<<" ";
        cout<<endl;
    }

}
int main(){
int a[10][20];
int n; cout<<"n="; cin>>n;

fillArr(a,n);
writer(a,2*n);


return 0;
}
