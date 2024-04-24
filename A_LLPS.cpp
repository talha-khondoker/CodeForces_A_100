#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    map<char, int> mp;
    for(int i=0; i<s.size(); i++)
    {
        mp[s[i]]++;
    }
    map <char,int> :: reverse_iterator r = mp.rbegin();
    char x=r->first;
    int n=r->second;
    for(int i=0; i<n; i++)
    {
        cout<<x;
    }
    return 0;
}