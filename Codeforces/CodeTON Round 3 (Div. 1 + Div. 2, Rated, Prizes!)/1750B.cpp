#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(ll i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define YES            cout << "YES\n"
#define NO             cout << "NO\n"
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define str_unique     s.resize(unique(s.begin(), s.end()) - s.begin());
#define str_unique1    s.erase(unique(s.begin(),s.end()),s.end());
#define int_length(x)  to_string(x).length()

void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll zr = 0, on = 0,mx = INT_MIN , l = 0, r = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == '0')
        {
            l++;
            zr++;
            mx = max({mx, r, l});
            r = 0;
        }
        else if(s[i] == '1')
        {
            r++;
            on++;
            mx = max({mx, l, r});
            l = 0;
        }
    }
    ll F = on * zr;
    ll Y = pow(mx, 2);
    cout<<max(F,Y)<<endl;
}
int main()
{
    fast;
//  optimize();
//    solve();
    ll t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
