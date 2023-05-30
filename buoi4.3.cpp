#include <iostream>
using namespace std;
int a[100][100],n,x[100],cnt=0;
bool check[100],cheolen[200],cheoxuong[200];
void khoi_tao()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            a[i][j]=0;
        }
    }
}
void xuat()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}

void Try(int i)
{
    for(int j=0;j<n;j++)
    {
        if(check[j]==0&&cheolen[i+j]==0&&cheoxuong[i-j+n]==0)
        {
            x[i]=j;
            check[x[i]]=1;
            cheolen[i+x[i]]=1;
            cheoxuong[i-x[i]+n]=1;
            a[i][x[i]]=1;
            if(i==n-1){xuat();}
            else
            {
                Try(i+1);
            }
            check[x[i]]=0;
            cheolen[i+x[i]]=0;
            cheoxuong[i-x[i]+n]=0;
            a[i][x[i]]=0;
        }
    }
}
int main()
{
    cin>>n;
    khoi_tao();
    Try(0);
    return 0;
}
