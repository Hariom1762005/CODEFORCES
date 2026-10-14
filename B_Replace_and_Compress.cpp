#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);

void solve() {
    string s; cin >> s;
    int ans = 1 ;
    bool three_exist = false;
    bool one_exist = false;

    for( int i = 1; i < s.size() -1; i++)
    {
        if( s[i-1] ==  s[i] && s[i] == s[i+1])three_exist = true;
        else if( s[i-1] !=  s[i] && s[i] != s[i+1])one_exist = true;
        if(three_exist && one_exist) break;
    }
    if( three_exist)ans++;
    if ( one_exist) ans++;
cout << ans << endl;
    
}
 

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;

   
    while (t--)
    {
        solve();
    }

    return 0;
}





