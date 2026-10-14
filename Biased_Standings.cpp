#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);

void solve() {
    int n ; 
    cin >> n ; int ans = 0;
    vector <int> v(n);
    for ( int i = 0 ; i < n ; i++)
    {
         string s ; cin >> s;
          cin >> v[i];
         
    }
    sort( v.begin() , v.end() );
    for ( int i = 0 ; i < n ; i++)
    {
         
         ans += abs( i + 1 - v[i]);
    }
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





