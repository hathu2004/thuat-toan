#include <bits/stdc++.h>
using namespace std;

void sap_xep(string s)
{
    vector<string>chu;
    vector<int>so;
    vector<string>xau;
    stringstream ss(s);
    string tmp;
    while(ss>>tmp)
    {
        xau.push_back(tmp);
    }
    for(string str : xau)
    {
        if(str[0]>='a'&&str[0]<='z'){str.pop_back();chu.push_back(str);}
        else
        {
            str.pop_back();
            int res=stoi(str);
            so.push_back(res);
        }
    }
    sort(chu.begin(),chu.end());
    sort(so.begin(),so.end());
    int i=0,j=0,k=0;
    for(string str : xau)
    {
      if(k!=xau.size()-1)
      {
        if(str[0]>='a'&&str[0]<='z')
        {
            cout<<chu[i]<<", ";
            i++;
        }
        else
        {
            cout<<so[j]<<", ";
            j++;
        }
      }
      else
      {
         if(str[0]>='a'&&str[0]<='z'){cout<<chu[i]<<".";}
         else {cout<<so[j]<<".";}
      }
      k++;
    }
}
int main()
{
    while(true)
    {
        string s;
        getline(cin,s);
        if(s=="."){break;}
        else{sap_xep(s);cout<<endl;}
    }
    return 0;
}
