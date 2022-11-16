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
    ll n, q;
    cin>>n>>q;
    ll a[n+1] = {0};
    ll odd = 0, even = 0, sum = 0, req = 0;
    rep(i,n)
    {
        cin>>a[i];
        sum +=a[i];
        if(a[i] % 2 == 0) even++;
        else odd++;
    }
    req = sum;

    while(q--)
    {
        ll c, v;
        cin>>c>>v;
        if(c == 0)
        {
            sum += (v * even);
            if(v % 2 != 0)
            {
                odd += even;
                even -= even;
            }

        }
        else if(c == 1)
        {
            sum +=(v * odd);
            if(v % 2 != 0){
                even += odd;
                odd -= odd;
            }
        }
        cout<<sum<<endl;
    }


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
