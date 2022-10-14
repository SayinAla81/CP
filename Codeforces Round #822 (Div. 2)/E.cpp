#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll a[n], ans[n][n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            ans[i][j] = (((i * j) + a[i] - i * i)) % n, (ans[i][j] < 0 ? ans[i][j] += n : 1);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cout << ans[i][j] << ' ' << (j == n - 1 ? "\n" : "");
}
