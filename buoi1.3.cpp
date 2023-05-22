#include <bits/stdc++.h>
using namespace std;

int binary_search(int a[],int left,int right, int value)
{
    int ans=-1;
    while(left<=right)
    {
        int middle=(left+right)/2;
        if(a[middle]<=value){ans=middle;left=middle+1;}
        else {right=middle-1;}
    }
    return ans;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(a,a+n);
    for(int i=0;i<m;i++)
    {
        int x=binary_search(a,0,n-1,b[i]);
        cout<<x+1<<endl;
    }
    return 0;
}
