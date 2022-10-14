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

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n, m;
		cin >> n >> m;
		string s[n];
		for(int i = 0; i < n; i++) cin >> s[i];
		for(int i = 0; i < m; i++)
			for(int j = n - 1; j >= 0; j--)
			{
				int index = j, mark = 1;
				if(s[j][i] == '*')
				{
					for(int k = j + 1 ; k < n; k++)
					{
						if(mark && s[k][i] == '.')
							index = k;
						else if(s[k][i] == 'o')
							mark = 0;
					}
					s[j][i] = '.', s[index][i] = '*';
				}
			}
		for(int i = 0; i < n; i++) cout << s[i] << endl;
	}

}
