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
vector <int> power(31);

void solve() {
    int n,m; cin >> n>>m;
    vector < int > v(n);
    for( int i = 0 ;i < n ; i++ )cin >> v[i] ;
    vector < int > q(m);
    for( int i = 0 ;i < m ; i++ )cin >> q[i] ;
    vector < int > add(31);
   // if any number is divisble 2 power 5
   add[0] = 0 ;
   for( int i = 1 ;i < 31 ; i++ )
   {
        int number = power[i];
        for( int j = 0 ;j < m ; j++ )
        {
            if(number % power[q[j]] ==0) number += power[q[j] -1];
        }
        add[i] = number - power[i];
        
   }
   for( int i = 0 ;i < n ; i++ )
   {
        int count = 0;
        int temp = v[i];
        while( temp!=0 && temp % 2 == 0){ count++; temp /=2; }
        v[i] += add[count];
        cout << v[i] <<" ";
   }
 
    cout << endl;
}
 

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
    cin >> t;
    power[0] = 1;
    for(int i = 1 ; i < 31; i++)
    {
        power[i] = 2 * power[i-1];
    }
   
    while (t--)
    {
        solve();
    }

    return 0;
}





