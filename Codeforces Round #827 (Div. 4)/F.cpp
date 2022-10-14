#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define F first
#define S second
#define pii pair<ll, ll>
#define pb push_back

const ll maxn = 30;

int main()
{
    //Dont Forget The ''Map''  :)

    ios::sync_with_stdio(false), cin.tie(0);
    

    ll t;
    cin >> t;
    while(t--)
    {
        ll q;
        cin >> q;
        ll a[2][maxn];
        for(int i = 0; i < 2; i++)
            fill(a[i], a[i] + maxn, 0);
        a[0][0]++, a[1][0]++;
        while(q--)
        {
            ll d, k, mark = 0;
            string ss;
            cin >> d >> k >> ss;
            d--;
            for(auto i : ss)
                a[d][i - 'a'] += k;
            for(int i = 0; i < maxn; i++)
                for(int j = maxn - 1; j > i; j--)
                    if(a[0][i] && a[1][j])
                        mark = 1;
            if(mark == 0)
            {
                int is = 1;
                for(int i = maxn - 1; i >= 0; i--)
                    if(a[0][i] >= a[1][i] && a[0][i])
                        is = 0;
                is ? mark = 1 : 1;
            }
            cout << (mark ? "YES" : "NO") << endl;
        }
    }
}
