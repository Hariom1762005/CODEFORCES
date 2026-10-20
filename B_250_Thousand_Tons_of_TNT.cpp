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
    if( n == 1 ){ cout << 0 << endl; return; }
    vector <int> factors;
    for( int i = 1 ; i * i <= n ; i++)
    {
        if( n % i == 0)
        {
            factors.push_back(i);
             if(i != n / i) 
            factors.push_back(n / i);
        
        }
    }
    int ans = 0;
    for( int i  = 0 ; i < factors.size() ; i++)
    {
        int maxi = LLONG_MIN;
        int mini = LLONG_MAX;
        for( int j = 0 ; j < n ; j = j + factors[i])
        {
            int temp = accumulate(v.begin() + j , v.begin() + j + factors[i]  , 0LL);
            maxi = max ( maxi , temp);
            mini = min ( mini , temp);

        }
        ans = max ( ans , maxi - mini);
    }
    cout << ans << endl;
};
 

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





