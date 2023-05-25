#include <iostream>
using namespace std;

int n,go=1,a[10];
void khoi_tao()
{
    for(int i=0;i<n;i++)
    {
        a[i]=0;
    }
}
void sinh()
{
    int i=n-1;
    while(i>=0&&a[i]==1)
    {
        a[i]=0;
        i--;
    }
    if(i==-1){go=0;}
    else
    {
        a[i]=1;
    }
}
int main()
{
    khoi_tao();
    cin>>n;
    int b[n],c[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i]>>c[i];
    }
    long long min=1000000000;
    while(go==1)
    {
        long long chua=1,cay=0;
        for(int i=0;i<n;i++)
        {
           if(a[i]==1){chua=chua*b[i];cay=cay+c[i];}
        }
        if(abs(chua-cay)<min&&(chua!=1||cay!=0)){min=abs(chua-cay);}
        sinh();
    }
    cout<<min;
    return 0;
}
