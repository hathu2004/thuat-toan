#include <bits/stdc++.h>
using namespace std;

struct tui
{
    int w,v;
};
bool cmp(tui A, tui B)
{
    return (double)A.v/A.w>=(double)B.v/B.w;
}
int Max=0;
tui a[100];
int n,W,x[100],V=0;
void Try(int i)
{
    for(int j=1;j>=0;j--)
    {
        x[i]=j;
        W-=a[i].w*x[i];
        V+=a[i].v*x[i];
        if(i==n&&W>=0)
        {
            if(V>Max){Max=V;}
        }
        else if(W>=0&&(double)V+(double)(W*a[i].v/a[i].w)>(double)Max)
        {
            Try(i+1);
        }
        W+=a[i].w*x[i];
        V-=a[i].v*x[i];
    }
}
int main()
{
    cin>>n>>W;
    for(int i=0;i<n;i++)
    {
        cin>>a[i].w>>a[i].v;
    }
    sort(a,a+n,cmp);
    Try(0);
    cout<<Max;
    return 0;
}

