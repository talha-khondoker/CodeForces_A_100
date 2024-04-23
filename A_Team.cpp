#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll cnt=0;
    while (n--)
    {
        ll x, y, z;
        cin>>x>>y>>z;
        if((x+y+y)>=2) cnt++;
    }
    cout<<cnt<<'\n';
    
    return 0;
}