#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define F first
#define S second
#define pii pair<ll, ll>
#define pb push_back

const ll maxn = 30;
ll dp[maxn][maxn];

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        for(int i = 0; i < maxn; i++)
            fill(dp[i], dp[i] + maxn, 0);
        ll n, ans = 0;
        cin >> n;
        string s[n];
        for(int i = 0; i < n; i++)
        {
            cin >> s[i];
            dp[s[i][0] - 'a'][s[i][1] - 'a']++;
        }
        for(int i = 0; i < maxn; i++)
            for(int j = 0; j < maxn; j++)
                for(int k = 0; k < maxn; k++)
                    if(k != j)   
                        ans += dp[i][j] * dp[i][k], ans += dp[j][i] * dp[k][i];
        cout << ans / 2 << endl;
        
    }
}
