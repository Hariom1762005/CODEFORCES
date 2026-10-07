#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);


void solve() {
     
    int n;
    cin >> n  ;
    vector < int > v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    sort( all ( v ) );

    int ans = 1;

    if( v[0] != 1)
    {
        cout << ans << endl;
        return;
    }
    
    int presum = 1;

    for( int i = 1; i < n ; i++ )
    {
        if( presum + 1 >= v[i] )
        presum += v[i];

        else 
        {
             cout << presum+1 << endl;
             return;
        }
       
    }

     cout << presum+1 << endl;
   

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





