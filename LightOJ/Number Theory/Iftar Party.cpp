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

//void solve(ll i)
//{
//}
int main()
{
    fast;
//    optimize();
//    solve();
    ll t;
    cin>>t;
    for(int c = 1; c<= t; c++)
    {

        ll n, m ;
        cin>>n>>m;
        printf("Case %d:",c);
        if( m * 2 >= n || n == 0) printf(" impossible");
        else
        {
            ll left = n - m;
            vector<ll> v;
            for(ll i = 1 ; i * i <= n ; i++)
            {
                if(left % i == 0)
                {
                    v.pb(i);
                    if(i != left / i) v.pb(left/i);
                }
            }
            sort(v.begin(), v.end());
            for(auto x : v)
            {
                if(m < x)  printf(" %lld",x);
            }
        }
         printf("\n");
    }

//    while(t--)
//    {
//
//        solve();
//    }
    return 0;
}


