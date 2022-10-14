#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define F first
#define S second
#define pii pair<ll, ll>
#define pb push_back

const ll maxn = 1e3 + 10, maxk = 20;
map <string, int> mp, counter;
ll a[maxn][maxk], ans, n, k;
string s[maxn];

int main()
{
    ios::sync_with_stdio(false), cin.tie(0);

    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < k; j++)
        {

            cin >> a[i][j];
            s[i] += a[i][j] + '0';
        }
        mp[s[i]]++;
    }
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
        {
            string now = "";
            for(int h = 0; h < s[i].size(); h++)
            {
                if(s[i][h] == s[j][h])
                    now += s[i][h];
                else
                    for(int ii = 0; ii < 3; ii++)
                        if(s[i][h] - '0' != ii && s[j][h] - '0' != ii)
                            now += '0' + ii;
            }
            if(mp[now])
                counter[s[i]]++, counter[s[j]]++, counter[now]++;
        }
    for(int i = 0; i < n; i++) counter[s[i]] /= 3; 
    for(int i = 0; i < n; i++)
        ans += (counter[s[i]]-- * counter[s[i]]) / 2;
    cout << ans;
}
