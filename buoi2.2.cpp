#include <bits/stdc++.h>
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
    int c;
    cin>>c>>n;
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int result, min=50000;
    while(go==1)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==1){sum+=b[i];}
        }
        if(sum<=c&&c-sum<min){min=c-sum;result=sum;}
        sinh();
    }
    cout<<result;
    return 0;
}
