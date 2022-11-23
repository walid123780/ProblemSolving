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
   int a , b;
   cin>>a>>b;
   if(a>b){
    int x = (a / b) + ( a % b > 0 ? 1 : 0);
    b *= x;
   }
//   cout<<b<<endl;
   int y = (b / a) + (b % a > 0 ? 1 : 0);
   cout<<y<<endl;
}

int main()
{
    fast;
//    optimize();
//    solve();
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

