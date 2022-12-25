#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long long n;
    cin>>n;
    vector<long long > a;
    long long positive = 0, negitive = 0;
    for(long long i = 0 ; i < n; i++)
    {
        long long x;
        cin>>x;
        if(x >= 0) positive++;
        else negitive++;
        a.push_back(x);
    }
    sort(a.rbegin(), a.rend());
    long long ans = 1;
    if(positive == n || negitive == n || n == 5)
    {
        for(long long i = 0 ; i < 5 ; i++)
        {
            ans *= a[i];
        }
    }
    else
    {
        vector< long long > v(10,0),v1(10, 0);
        long long temp = 1;
        for(long long i = 0 ; i < 5; i++)
        {
            temp *= a[i];
            if(a[i]>= 0) v[i] = temp;
        }
        temp = 1;
        long long l = 0;
        ans = INT_MIN;
        for(long long i = n-1; l < 5; i--, l++)
        {

            temp *= a[i];
            if(a[i] < 0) v1[l] = temp;
        }
        for(long long i = 4, j = 0; i >= 0 ; i--)
        {
            if(i == 4) {ans = max(ans, v1[i]);continue;}
            if(v1[i] != 0 || v[j] != 0)
            {
                ans = max ((v1[i] * v[j]), ans);
                j++;
            }
            else break;
        }
        for(long long i = 4, j = 0; i >= 0 ; i--)
        {
            if(i == 4) {ans = max(ans, v[i]); continue;}
            if(v[i] != 0 || v1[j] != 0)
            {
                ans = max ((v[i] * v1[j]) ,ans);
                j++;
            }
            else break;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    long long t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
