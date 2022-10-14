#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define F first
#define S second
#define pii pair<ll, ll>
#define pb push_back

template <typename Head, typename... Tail>
void debug_out(vector<string> args, int idx, int LINE_NUM, Head H, Tail... T) {
	if(idx > 0) cerr << ", "; else cerr << "Line(" << LINE_NUM << ") ";
	stringstream ss; ss << H;
	cerr << args[idx] << " = " << ss.str();
	debug_out(args, idx + 1, LINE_NUM, T...);
}

const ll maxn = 110;
ll dp[maxn];

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n, k, ans = 0;
		cin >> n >> k;
		fill(dp, dp + maxn, 0);
		ll a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			dp[a[i]]++;
		}
		for(int i = 0; i < maxn; i++)
			if(dp[i])
				ans += min(dp[i], k);
		cout << ans << endl;
	}
}
