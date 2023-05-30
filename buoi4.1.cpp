#include <iostream>
using namespace std;

int m,n,a[100][100],b[200];
void xuat()
{
    for(int i=1;i<=m+n-2;i++)
    {
        if(b[i]==0){cout<<"D";}
        else{cout<<"R";}
    }
    cout<<endl;
}
void Try(int i,int x, int y)
{
    for(int j=0;j<=1;j++)
    {
        b[i]=j;
        if(b[i]==0)
        {
            if(a[x+1][y]==1&&x+1<=m)
            {
                if(i==m+n-2){xuat();}
                else {Try(i+1,x+1,y);}
            }
        }
        else
        {
            if(a[x][y+1]==1&&y+1<=n)
            {
                if(i==m+n-2){xuat();}
                else {Try(i+1,x,y+1);}
            }
        }
    }
}
int main()
{
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    Try(1,1,1);
    return 0;
}

