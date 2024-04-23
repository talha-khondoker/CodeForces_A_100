#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    set<ll> n;
    for(int i=0; i<s.size(); i++)
    {
        ll x=s[i]-'0';
        n.insert(x+1);
    }
    if((n.size())%2==0) cout<<"CHAT WITH HER!"<<'\n';
    else cout<<"IGNORE HIM!"<<'\n';
    return 0;
}