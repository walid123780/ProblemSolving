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
    int n, m;
    cin>>n>>m;
    int a[10] = {0};

    while(m--)
    {
        int c,b;
        cin>>c>>b;
        a[b] = 1;
    }
    if(n == 1){
        cout<<"NO\n";
        return;
    }
    int f = 0;
    for(int i = 1; i <= n ; i++)
    {
        if(i == 1 && a[i] == 1 && a[i+1] == 0) f = 1;
        else if(i == n && a[i] == 1 && a[i-1] == 0)f = 1;
        else if( (i != n && i != 1) && a[i] == 1 && (a[i-1] == 0 || a[i+1] == 0)) f = 1;
    }
    if(f) cout<<"YES\n";
    else cout<<"NO\n";
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
