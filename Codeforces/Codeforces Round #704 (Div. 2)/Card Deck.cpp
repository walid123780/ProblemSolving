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
    int n;
    cin>>n;
    vector<pii>p;
    bool f[n+1] = {false};
    int a[n+1];
    for(int i = 0 ; i< n ; i++)
    {
        int x;
        cin>>x;
        a[i] = x;
        p.pb({x, i});
    }
    sort(p.rbegin(),p.rend());
//    rep(i,n) {
//
//       cout<<p[i].second<<" " << p[i].first<<endl;;
//    }
    int q = n;
    for(int i = 0 ; i < n ; i++)
    {

        for(int j = p[i].second ; j < q ; j++)
        {
            cout<<a[j]<<" ";
            f[j] = true;
            if(j == q-1) q = p[i].second;
        }

    }
    cout<<endl;



}

int main()
{
    fast;
//    optimize();
//    solve();
    ll t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
