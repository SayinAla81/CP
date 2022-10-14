#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define F first
#define S second
#define pii pair<ll, ll>
#define pb push_back


int main()
{
    //Dont Forget The ''Map''  :)

    ios::sync_with_stdio(false), cin.tie(0);


    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        if(n == 3)
            cout << -1 << endl;
        else if(n % 2 == 0)
        {
            for(int i = n; i >= 1; i--)
                cout << i << ' ';
            cout << endl;
        }
        else
        {
            for(int i = n; i > n / 2 + 1; i--)
                cout << i << ' ';
            for(int i = 1; i <= n / 2 + 1; i++)
                cout << i << ' ';
            cout << endl;
        }
    }

}
