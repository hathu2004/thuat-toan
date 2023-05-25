#include <iostream>
using namespace std;

const int MOD = 1000000007;
int pow(long long a, long long b)
{
    if(b==0){return 1;}
    else
    {
    long long res=1;
    while (b > 0)
    {
        if(b % 2 == 1) {res = (res * a) % MOD;}
        a = (a * a) % MOD;
        b /= 2;
    }
    return res;
    }
}

int main()
{
    while (true)
    {
        long long a;
        long long b;
        cin >> a >> b;
        if (a == 0 && b == 0){break;}
        cout << pow(a, b) << endl;
    }
    return 0;
}
