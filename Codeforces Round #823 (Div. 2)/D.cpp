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
    ios::sync_with_stdio(false), cin.tie(0);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, mark = 0;
        string s, ss;
        cin >> n >> s >> ss;
        for(int i = 0; i < maxn; i++)
            fill(dp[i], dp[i] + maxn, 0);
        for(int i = 0; i < n; i++)
        {
            if(s[i] < ss[n - 1 - i])
                dp[s[i] - 'a'][ss[n - 1 - i] - 'a']++;
            else
                dp[ss[n - 1 - i] - 'a'][s[i] - 'a']++;
        }
        for(int i = 0; i < maxn; i++)
            for(int j = 0; j < maxn; j++)
                if(dp[i][j] % 2 == 1)
                    i == j ? mark++ : mark = 3;
        cout << (mark > 1 ? "NO" : "YES") << endl;
    }
}
