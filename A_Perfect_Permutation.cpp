#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    if(n%2==1) 
    {
        cout<<-1<<'\n';
    }
    else
    {
        cout << "2 1";
        for (int i = 3; i < n; i += 2)
        {
            cout << " " << i + 1 << " " << i;
        }
        cout << endl;
    }
    return 0;
}
