#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);


void solve() {
     
    int n ; cin >> n;
    vector < int > v(n) ;
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> v[i] ;
    }

    multiset < int > ms;
    ms.insert( v[0] );
    int ans = 1 ;
    for ( int i = 1 ; i < n ; i++ )
    {
        auto it  = ms.upper_bound(v[i]);

        if( it == ms.end() )
        {
            ans++;
            ms.insert(v[i]);
        }
        else
        {
            ms.erase(it);
            ms.insert(v[i]);
        }
    }

    cout << ans << endl;


}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    //cin >> t;

   
    while (t--)
    {
        solve();
    }

    return 0;
}





