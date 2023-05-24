#include <bits/stdc++.h>
using namespace std;

int binary_search(int a[],int left,int right, int value)
{
    int ans=0;
    while(left<=right)
    {
        int middle=(right+left)/2;
        if(a[middle]<=value){ans=middle;left=middle+1;}
        else{right=middle-1;}
    }
    return ans;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int result,min=a[n-1];
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+2;j<n;j++)
        {
            if(2*a[i]+a[j]<m)
            {
                int mid=binary_search(a,i+1,j-1,m-a[i]-a[j]);
                if(m-a[i]-a[j]-a[mid]<min){min=m-a[i]-a[j]-a[mid];result=a[i]+a[j]+a[mid];}
            }
        }
    }
    cout<<result;
    return 0;
}
