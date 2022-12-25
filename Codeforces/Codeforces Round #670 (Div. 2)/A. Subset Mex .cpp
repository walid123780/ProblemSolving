#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n;
        map<int,int> mp;
        for(int i = 0 ; i < n; i++)
        {
            int x;
            cin>>x;
            mp[x]++;
        }
        int j = 0, last = -1 , f = 1;
        for(j = 0; j <= 100; j++)
        {
            if(mp[j] == 0) break;
            if(mp[j] > 1 && f)last = j;
            if(mp[j] == 1) f = 0;

        }
        cout<< (j) + (last != -1 ? last + 1 : 0)<<endl;
    }
    return 0;
}
