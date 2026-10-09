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
   vector < int > bitson(8); 
   int ans = 0;
   for(int i = 0; i < n ; i++)
   {
        cin >> v[i];
        for( int j = 7; j >= 0; j-- )
        {
            bitson[j] += (v[i] >> j) & 1;
        }
   }
   for( int j = 7; j >= 0; j-- )
    {
        
        if(bitson[j] % 2 != 0 ) ans += pow( 2 ,j);
        

    }
   if( n % 2 != 0)cout << ans <<endl;
   else{
        if( ans == 0) cout << ans << endl;
        else cout << "-1" <<endl;
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





