#include <iostream>
using namespace std;

int Min=100000000;
bool check[100];
int n,x[100],a[100][100];
void xuat()
{
    for(int i=1;i<=n;i++)
    {
        cout<<x[i];
    }
    cout<<endl;
}
int cost=0;
void Try(int i)
{
    x[1]=1;
    for(int j=2;j<=n;j++)
    {
        if(check[j]==0)
        {
            x[i]=j;
            check[x[i]]=1;
            cost+=a[x[i-1]][x[i]];
            if(i==n)
            {
                cost+=a[x[i]][1];
                if(cost<Min){Min=cost;}
                cost-=a[x[i]][1];
            }
            else {Try(i+1);}
            cost-=a[x[i-1]][x[i]];
            check[x[i]]=0;
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    Try(2);
    cout<<Min;
    return 0;
}
