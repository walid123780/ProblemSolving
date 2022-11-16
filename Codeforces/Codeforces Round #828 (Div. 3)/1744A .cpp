#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define str_unique     s.resize(unique(s.begin(), s.end()) - s.begin());
#define str_unique1    s.erase(unique(s.begin(),s.end()),s.end());
#define int_length(x)  to_string(x).length()

void solve()
{
    int n;
    cin>>n;
    int a[n+1];
    map<int, char> mp;
    rep(i,n)
    {
        cin>>a[i];

    }
    string s;
    cin>>s;
    int F = 0;
    for(int i = 0; i < n; i++)
    {
        if(mp[a[i]] == 0)mp[a[i]] = s[i];
        else if(mp[a[i]] != s[i]){ F = 1; break;}
    }
    if(F & 1) cout<<"NO\n";
    else cout<<"YES\n";

}

int main()
{
    fast;
//  optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
