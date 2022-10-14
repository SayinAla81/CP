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
        cout << "Division ";
        if(n <= 1399)
            cout << 4;
        else if(n <= 1599)
            cout << 3;
        else if(n <= 1899)
            cout << 2;
        else 
            cout << 1;
        cout << endl;
    }
}
