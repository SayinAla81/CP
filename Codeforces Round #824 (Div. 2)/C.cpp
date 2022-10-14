#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define F first
#define S second
#define pii pair<ll, ll>
#define pb push_back

const ll maxn = 30;
pii dp[maxn];
ll father[maxn];

ll find_par(ll n)
{
    if(father[n] == n)
        return n;
    return find_par(father[n]);
}


int main()
{
    ios::sync_with_stdio(false), cin.tie(0);

    ll t;
    cin >> t;
    while(t--)
    {
        // first  = in   a.F = c  ==   c -> a 
        // secon = out   a.S = c  ==   a -> c
        ll n, counter = 0;
        string s, ans = "";
        cin >> n >> s;
        for(int i = 0; i < maxn; i++)
        {
            dp[i] = {-1, -1};
            father[i] = i;
        }
        ll a[n];
        for(int i = 0; i < n; i++) a[i] = s[i] - 'a';
        for(int i = 0; i < s.size(); i++)
        {
            if(dp[a[i]].F == -1)
                for(int j = 0; j < maxn; j++)
                    if(dp[j].S == -1)
                        if(find_par(j) != a[i] || counter == 25)
                        {
                            dp[a[i]].F = j;
                            dp[j].S = a[i];
                            father[a[i]] = j;
                            j = maxn, counter++;
                        }
            ans += dp[a[i]].F + 'a';
        }
        cout << ans << endl;
    }
}
