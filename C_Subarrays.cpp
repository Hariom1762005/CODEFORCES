#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);

void solve() {
    int n , k ; cin >> n >> k;
    vector< int > v(n);
    for( int i = 0; i < n ; i++)cin >> v[i];
    int x = 0 ;
    for( int i = 0; i < n ; i++)
    {
        v[i] = v[i] + x;
        x = v[i] ;
    }
     for( int i = 0; i < n ; i++)
    {
        v[i] %= k;
    }
    v.insert( v.begin() , 0);
    int ans = 0;
    map <int ,int > mp;
    for( int i =0 ; i <= n ; i++)
    {
        if( i >= k +1 )mp[ v[i - k - 1]]++;
        ans += mp[ v [i]];
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





