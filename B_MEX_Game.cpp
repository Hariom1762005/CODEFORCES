#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);


void solve() {
     
   int n , k ; cin >> n >> k  ;
   vector < int > v(n);
    map < int , int > mp;
    for( int i = 0 ; i < n ; i++)
    {
        cin >> v[i];
        mp [ v[i] ]++;

    }
    int maxi = *max_element( all ( v ) );
    for( int i = 0 ; i <= maxi ;  i++)
    {
        if( mp[ i ] == 2 * k - 1 ){ cout << "YES" << endl; return ;}
        else if( mp[ i ] < 2 *  k ){ cout << "NO" << endl; return ;}
    }

    cout << "NO" << endl;
   
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





