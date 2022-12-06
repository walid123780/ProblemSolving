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
    int a[n+10] = {0};
    int j = 0, k= 0 , l = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        cin>>a[i];
        j = __gcd(j, a[i]);
        if(i == n)
        {
            l = __gcd(l , a[i]);
            continue;
        }
        k = j;
        if(i == n - 1)
        {
            continue;
        }
        l = j;
    }
    if(j == 1)
    {
        cout<<"0\n";
        return;
    }
    if(__gcd(j , n) == 1){
        cout<<"1\n";
        return;
    }
    if(__gcd(j ,(n - 1)) == 1){
        cout<<"2\n";
        return;
    }
    cout<<"3"<<endl;
}


int main()
{
    fast;
//    optimize();
    ll t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
