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
    vector < int > v ( n );
   
    int sum = 0;
    for( int i  = 0 ; i < n ; i++) { cin >> v[i]; sum += v[i] ;}
     sort ( all ( v ) );
    int half = sum / 2;int count= 0 ;
    for( int i = n-1; i >=0 && half > 0 ; i--)
    {
        half -= v[i];
        count++;
    
    }
     
   cout << count + sum - sum/2 << endl;
    // 1 2 2 3 4 5

    
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





