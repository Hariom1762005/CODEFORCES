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
    vector < int > v(n);
    for( int i = 0 ; i < n ; i++) cin >> v[i];
    int ans = v[0];
    int sum = 0;
    int cache = -1;
    stack <int> temp;
    for( int i = 0 ; i < n ; i++)
    {
        if(temp.empty())
        {
            if( v[i] >=0 )
            {
                temp.push( v[i] ) ; 
                sum += v[i] ;
                ans = max (sum , ans );
            }    
            else
            ans = max( ans , v[i] ) ;

        }
        else
        {
            if(temp.top() % 2 == 0 && v[i] % 2 !=0  && sum + v[i] >= 0)
            {
                temp.push( v[i] ) ; 
                sum += v[i] ;
                 ans = max (sum , ans );
            }
            else if( temp.top() % 2 != 0 && v[i] % 2 ==0 && sum + v[i] >= 0)
            {
                temp.push( v[i] ) ; 
                sum += v[i] ;
                 ans = max (sum , ans );
            }
            else
            {
                
                while (!temp.empty())temp.pop();
                sum = 0;
                
                    if( v[i] >=0 )
                    {
                        temp.push( v[i] ) ; 
                        sum += v[i] ;
                         ans = max (sum , ans );
                    }    
                    else
                    ans = max( ans , v[i] ) ;
                
            }
        }
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





