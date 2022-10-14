#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define F first
#define S second
#define pii pair<ll, ll>
#define pb push_back

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j <= i; j++)
                cout << (j == 0 || j == i ? '1' : '0') << ' ';
            cout << endl;
        }
    }
}
