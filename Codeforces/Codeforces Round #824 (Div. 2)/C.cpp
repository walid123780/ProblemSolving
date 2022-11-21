#include <bits/stdc++.h>
using namespace std;

#define ll             long long int
#define pii            pair<string,int>
#define rep(i,n)       for(int i=0;i<n;i++)
#define rep1(i,n)      for(int i=1;i<=n;i++)
#define output(a,n)    for(int i=0;i<n;i++) cout<<a[i]<<" ";
#define pb             push_back
#define endl           "\n"
#define fast           ios_base::sync_with_stdio(false);
#define optimize()     ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fast;
//    optimize();
    int t = 1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string t;
        cin>>t;
        vector<int>parent(27,-1),avail(27,1),child(27,-1);
        string s ="";
        for(char  c : t)
        {
            int d = c - 'a';
            if(parent[d] == -1)
            {
                for(int j = 0; j < 26; j++)
                {
                    if(j != d and avail[j])
                    {
                        bool fnd = 0;
                        int u = d;
                        int len = 0;
                        while(child[u]!= -1)
                        {
                            if(child[u] == j)
                            {
                                fnd = 1;
                                break;
                            }
                            u = child[u];
                        }
                        if(fnd)
                        {
                            int v = j;
                            while(v != d)
                            {
                                len++;
                                v = parent[v];
                            }
                        }
                        if(!fnd or len == 25)
                        {
                            parent[d] = j;
                            avail[j] = 0;
                            child[j] = d;
                            break;
                        }
                    }
                }
            }
            assert(parent[d] != -1);
            s += parent[d] + 'a';
        }
        cout<<s<<endl;
    }
    return 0;
}
