#include <iostream>
using namespace std;
void quick_sort(int arr[],int left, int right)
{
    int i=left, j=right;
    int pivot=arr[(left+right)/2];
    while(i<=j)
    {
        while(arr[i]>pivot)
            i++;
        while(arr[j]<pivot)
            j--;
        if(i<=j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    if(left<j)
        quick_sort(arr,left,j);
    if(i<right)
        quick_sort(arr,i,right);
}
int main()
{
    long long n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long sum=a[0];
    quick_sort(a,1,n-1);
    for(int i=1;i<=k;i++)
    {
       sum+=a[i];
    }
    for(int i=k+1;i<n;i++)
    {
        sum-=a[i];
    }
    cout<<sum;
    return 0;
}
