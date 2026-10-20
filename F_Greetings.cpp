#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

tree<int, null_type, less<int>, rb_tree_tag,
     tree_order_statistics_node_update> s;
#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);

void solve() {
    int n ; cin >> n;
    vector < pair <int, int > > v ( n );
   
   for( int i = 0; i < n ; i++)
   {
        cin >> v[i ].first;
        cin >> v[i].second;

   }
   sort( v.rbegin(), v.rend());
   int ans = 0; s.clear();
   for(int i = 0 ; i < n ; i++)
   {
        if( !s.empty())
        {
                          
                ans += s.order_of_key(v[i].second);  
        }
        s.insert(v[i].second);
   }
    // 1 2 2 3 4 5

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





