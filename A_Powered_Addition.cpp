#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);


void solve() {
     
   int n ; cin >> n ;
   vector < int > v(n);
   for( int i = 0 ; i < n ; i++) cin >> v[i];

   int prefmax = v[0] ;
   int maxdiff = 0;

   for( int i = 1 ; i < n ; i++) 
   {
        prefmax = max ( prefmax , v[i]);
        maxdiff = max(maxdiff , prefmax - v[i]);
   }

   if( maxdiff == 0) cout << 0 << endl;
   else 
   {
        cout << (int)log2( maxdiff ) + 1 << endl;
   }
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





