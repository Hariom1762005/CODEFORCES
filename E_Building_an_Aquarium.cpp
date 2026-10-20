#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

tree<int, null_type, less<int>, rb_tree_tag,
     tree_order_statistics_node_update> s;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;

bool check( vector <int> v , int x  , int mid)
{
    for(int i = 0; i < v.size() ;i++)
    {
        if(v[i] < mid) x -= mid - v[i];
    }
    if( x < 0) return false;
    else return true;
}

void solve() {
    int n, x; cin >> n >> x;
    vector < int > v(n);
    for( int i = 0 ;i < n ; i++ )cin >> v[i] ;
    int low = 1;
    int ans = 1;
    int temp = *max_element( all(v) );
    int high = temp + x;
    while( low <= high)
    {
        int mid = low + ( high - low ) /2;
        if( check( v, x, mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else high = mid - 1; 
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





