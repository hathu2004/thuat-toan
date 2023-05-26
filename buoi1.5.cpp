#include <bits/stdc++.h>
using namespace std;

double thu(vector<double>v, double x)
{
    double result=0;
    for(int i=0;i<v.size();i++)
    {
        result=result+v[i]*pow(x,i);
    }
    return result;
}

int main()
{
    int D;
    cin>>D;
    vector<double>v(D+1);
    for(int i=0;i<=D;i++)
    {
        cin>>v[i];
    }
    double l=-1000000, r=1000000,x;
    while(r-l>0.0001)
    {
       x=(l+r)/2;
       double fx=thu(v,x);
       if(fx==0){break;}
       else if(fx*thu(v,l)<0){r=x;}
       else{l=x;}
    }
    cout<<(long long)(x*1000)<<endl;
    return 0;
}

