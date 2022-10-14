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
        ll n, ans = 0;
        string s = "1", ss;
        cin >> n >> ss;
        s += ss;
        for(int i = 1; i < s.size(); i++)
            if(s[i] == '0' || s[i] == '2')
                for(int j = i; j < s.size(); j += i)
                {
                    if(s[j] == '0') 
                        s[j] = '2', ans += i;
                    else if(s[j] == '1')  
                        j = s.size();
                }
        cout << ans << endl;
    }
}
