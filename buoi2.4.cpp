#include <iostream>
using namespace std;

int n, a[4],go=1;
void khoi_tao()
{
    for(int i=1;i<=3;i++)
    {
        a[i]=i;
    }
}
void sinh()
{
    int i=3;
    while(a[i]==n-3+i)
    {
        i--;
    }
    if(i==0){go=0;}
    else
    {
        a[i]++;
        int tmp=a[i];
        while(i<=3){a[i++]=tmp++;}
    }
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        khoi_tao();
        int m,result,min=300000;
        cin>>n>>m;
        int b[n+1];
        for(int j=1;j<=n;j++)
        {
            cin>>b[j];
        }
        while(go==1)
        {
        int sum=0;
        for(int j=1;j<=3;j++)
        {
            sum+=b[a[j]];
        }
        if(sum<=m&&m-sum<min){min=m-sum;result=sum;}
        sinh();
        }
        go=1;
        cout<<result<<endl;
    }
    return 0;
}
