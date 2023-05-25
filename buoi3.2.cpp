#include <iostream>
using namespace std;

long long fib(int n)
{
    long long f[n+1];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++)
    {
        f[i]=(f[i-1]+f[i-2])%1000000007;
    }
    return f[n];
}
int main()
{
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}
