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
    cin>>n;
    while(go==1)
    {
       for(int i=0;i<n;i++)
       {
           cout<<a[i];
       }
       cout<<endl;
       sinh();
    }
    return 0;
}
