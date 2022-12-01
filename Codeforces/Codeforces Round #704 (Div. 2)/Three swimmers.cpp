
#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<int,int>
#define rep(i,n)       for(ll i=0;i<n;i++)
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
    int n, m;
    cin>>n>>m;
    string s, t;
    cin>>s>>t;

    map<char,  int > mp , mp1;
    int sz = s.size() ;
    for(int i = 0; i < sz ; i++)
    {
        mp[s[i]] = i+1;
    }
    if(mp[s[0]] == n) {
        cout<<n-1<<endl;
        return;
    }
    for(int i = sz - 1; i >= 0 ; i--)
    {
        mp1[s[i]] = i+1;
    }
    int y = mp[t[0]], first = 0 , mx = INT_MIN;

    for(auto f : t)
    {
        if(first == 0)
        {
            first = 1; continue;
        }
        int jj = abs(y - mp[f]);
        mx = max(mx ,jj);
        y = mp[f];
    }
    reverse(t.begin() , t.end());
    int y1 = mp1[t[0]], first1 = 0 , mx1 = INT_MIN;
    for(auto f : t){
        if(first1 == 0){
            first1 = 1;
            continue;
        }
        int jjj = abs(y1 - mp1[f]);
        mx1 = max(mx1 , jjj);
        y1 = mp1[f];
    }
    cout<<max(mx, mx1)<<endl;

}

int main()
{
    fast;
//    optimize();
//    solve();
//    ll t = 1;
//    cin>>t;
//    while(t--)
//    {
    solve();
//    }
    return 0;
}
