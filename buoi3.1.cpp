#include<bits/stdc++.h>
using namespace std;
long long gt(int n){
    if(n>1) return gt (n-1)*n;
    return 1;

}
int main(){
    int n;
    while(1)
    {
        cin>>n;
        if(n==0) break;
        cout<< gt(n)<<endl;
    }
    return 0;
}
