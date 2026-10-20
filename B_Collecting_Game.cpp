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


void solve() {
    int n; cin >> n;
    vector < pair < int , int > > v(n);
    for( int i = 0 ; i < n ; i++)
    {
        cin >> v[i].first;
        v[i].second = i ;
    }
    sort( all ( v ) ); 
    vector <int> presum(n +1 );
    vector <int> ans(n);
    presum[0] = v[0].first;
    for( int i = 1 ; i < n ; i++)
    {
        presum[i] = v[i].first + presum[ i-1] ;
    }
    // 1,2  2,4  4,3  5,1  20,0
    // 1     3    7    12   22
  
    int j = 0;
    for(int  i = 0 ; i < n ; i++)
    {
        if( i != n-1 &&  presum[i] >= v[i+1].first);
        else
        {
            while( i >= j )
            {
                ans[v[j].second] = i ;
                j++;
            }
        }
    }
    for(int  i = 0 ; i < n ; i++)
    {
        cout << ans[i] <<" ";
    }
    cout << endl;
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





