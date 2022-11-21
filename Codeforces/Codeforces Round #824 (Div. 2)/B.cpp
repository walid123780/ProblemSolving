#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define endl             "\n"
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
//    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1]={0}, ans = 0 , g,h;
        int mn = INT_MAX;
        for(int i = 0 ; i < n; i++)
        {
            cin>>arr[i];
            mn =  min(mn, arr[i]);
        }
        mn = (mn * 2) - 1;
        for(int i = 0 ; i < n; i++)
        {
            if(arr[i] * 2 > mn)
            {
                 g = arr[i] / mn;
                 h = arr[i] % mn;
            }
//            mn = min(mn, h);
//            mn = (mn * 2) - 1;
            if(h == 0)ans += (g-1);
            else ans += (g);
        }
        cout<<ans<<endl;

    }
    return 0;
}


 
