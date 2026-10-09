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
   vector < int > v(n);
   
   for( int i = 0; i < n ; i++) cin >> v[i]; 

   int ans = 0;
   if( n ==1 )
   {
        cout << ans << endl;
        return;
   }
   for( int i = 0; i < n ; i++)
   {
        while( i < n-1 && (v[i] % 2) == (v[i+1] % 2) )
        {
            ans++;
            i++;
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





