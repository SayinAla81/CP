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
        string s[8];
        char ans = 'B';
        for(int i = 0; i < 8; i++) cin >> s[i]; 
        for(int i = 0; i < 8; i++)
        {
            ll mark = 1;
            for(int j = 0; j < 8; j++)
                if(s[i][j] != 'R')
                    mark = 0;
            if(mark)
                ans = 'R';
        }
        cout << ans << endl;
    }
}
