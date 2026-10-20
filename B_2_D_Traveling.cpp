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

bool check( vector <int> v , int x  , int mid)
{
    for(int i = 0; i < v.size() ;i++)
    {
        if(v[i] < mid) x -= mid - v[i];
    }
    if( x < 0) return false;
    else return true;
}

void solve() {
    int n , k , a , b;
    cin >> n >> k >> a >> b;
    vector< pair <int , int > > v( n);
    for( int i = 0 ; i < n ; i++) 
    {
        cin >> v[i].first >> v[i].second;
    }
    if( k == 0)
    {
        cout << abs( v[b-1].first - v[a-1].first ) + abs( v[b-1].second - v[a-1].second ) << endl;
        return;
    }
    if( k >= a && k >= b)cout << "0" << endl;
    else if( k < a && k >= b)
    {
        int mini = LLONG_MAX;
        for( int i = 0 ; i < k ; i++) 
        {
           mini = min (mini , abs( v[i].first - v[a-1].first ) + abs( v[i].second - v[a-1].second ) );
        }
        cout << min ( mini, abs( v[b-1].first - v[a-1].first ) + abs( v[b-1].second - v[a-1].second )  ) << endl ;
    }
    else if( k >= a && k < b)
    {
        int mini = LLONG_MAX;
        for( int i = 0 ; i < k ; i++) 
        {
           mini = min (mini , abs( v[i].first - v[b-1].first ) + abs( v[i].second - v[b-1].second ) );
        }
        cout << min ( mini, abs( v[b-1].first - v[a-1].first ) + abs( v[b-1].second - v[a-1].second )  ) << endl;
  
    }
    else
    {
        int mini1 = LLONG_MAX;
        for( int i = 0 ; i < k ; i++) 
        {
           mini1 = min (mini1 , abs( v[i].first - v[a-1].first ) + abs( v[i].second - v[a-1].second ) );
        }
        int mini2 = LLONG_MAX;
        for( int i = 0 ; i < k ; i++) 
        {
           mini2 = min (mini2 , abs( v[i].first - v[b-1].first ) + abs( v[i].second - v[b-1].second ) );
        }
        cout << min ( mini1 + mini2 , abs( v[b-1].first - v[a-1].first ) + abs( v[b-1].second - v[a-1].second )  ) << endl;
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





