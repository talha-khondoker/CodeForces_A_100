#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin>>n>>m;
    ll cnt=0;
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            ll k=(i*i)+j;
            ll f=(j*j)+i;
            if(k==n && f==m)
            {
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}