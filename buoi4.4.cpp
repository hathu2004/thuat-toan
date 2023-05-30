#include <iostream>
using namespace std;

int x[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int y[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int n,x_go,y_go;
int a[11][11]={0};
void xuat()
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void Try(int i,int x_go, int y_go)
{
    int u,v;
    for(int k=0;k<8;k++)
    {
        u=x_go+x[k];
        v=y_go+y[k];
        if(u<=n&&u>=1&&v>=1&&v<=n&&a[u][v]==0)
        {
            a[u][v]=i;
            if(i==n*n){xuat();}
            else
            {
                Try(i+1,u,v);
                a[u][v]=0;
            }
        }
    }
}
int main()
{
    cin>>n>>x_go>>y_go;
    a[x_go][y_go]=1;
    Try(2,x_go,y_go);
    return 0;
}
