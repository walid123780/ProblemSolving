#include<bits/stdc++.h>
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
    vector<pii>v;
    vector<int > v2;
    for(int i = 0 ; i < n; i++)
    {
        int x;
        cin>>x;
        v2.pb(x);
    }
    for(int i = 0 ; i < n; i++)
    {
        int x;
        cin>>x;
        v.pb({x ,v2[i]});
    }
    sort(v.begin(), v.end());

    ll cnt = 0;
    for(int i = 0 ; i < n; i++)
    {
        if(i == 0) {cnt += v[i].second; continue;}
        cnt += (v[i].second + v[i-1].first);
    }
    cout<<cnt<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

