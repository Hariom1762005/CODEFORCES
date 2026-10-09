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
   for( int i = 0; i < n ; i++)
   cin >> v[i]; 
    for( int i = 0; i < n ; i++)
    {
        for( int j = i+1 ; j < n ; j++)
        {
            if ( __gcd( v[i] , v[j]) <= 2LL )
            {
                cout<< "Yes" << endl;
                return;
            }    
        }
    }
     cout<< "No" << endl;

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





