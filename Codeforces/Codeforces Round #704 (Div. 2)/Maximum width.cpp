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
    vector<int>position_left(m);
    int pos =  0;
    for(int i = 0 ; i < n ; i++){
        if(pos == m)
            break;
        if(s[i] == t[pos]){

            position_left[pos] = i;
            pos++;

        }
    }
    vector<int> position_right(m);
    pos = m-1;
    for(int i = n-1 ; i >= 0; i--){
        if(pos == -1)
            break;
        if(s[i] == t[pos]){
            position_right[pos] = i;
            pos--;
        }
    }
    int ans = 0;
    for(int i = 0; i< m-1; i++){
        ans = max(ans , position_right[i+1] - position_left[i]);
    }
    cout<<ans<<endl;
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
