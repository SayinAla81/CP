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
        ll a, b ,c;
        cin >> a >> b >> c;
        if(a == b + c || b == a + c || c == a + b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
