#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll tc=4;
    set<ll> s;
    while (tc--)
    {
        ll x;
        cin>>x;
        s.insert(x);
    }
    cout<<4-s.size()<<'\n';
    
    return 0;
}