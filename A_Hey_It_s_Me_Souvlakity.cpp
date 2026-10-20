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
//vector <ll> power(31);

void solve() {
    int n ; cin >>n;
    string s ; cin >> s; int count =0 ;
    for( int i =0 ; i< n; i++)
    if( s[i] == '1')count++;
   int first = s.find('1');
    int last = s.rfind('1');
    if ( count ==1 )cout << 0<< endl;
    else if( count == 2)cout << 1<< endl;
    else cout << ( last - first)<<endl;
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





