#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);

void solve() {
    int xmax, ymax , n; 
    vector < int > x ;
    vector < int > y ;
    cin >> xmax >> ymax >> n;
    x.push_back( 0 );
    x.push_back( xmax + 1 );
    y.push_back( ymax + 1 );
    y.push_back( 0 );
    for( int i = 0; i < n; i++)
    {
        int temp1, temp2 ;
        cin >> temp1;
        cin >> temp2;
        x.push_back( temp1 );
        y.push_back( temp2 );
    }
    sort ( x.begin() , x.end()) ;
    sort ( y.begin() , y.end())  ;  
    int xmaxdiff = 0,  ymaxdiff = 0;
   for( int i = 1; i < n + 2; i++)
    {
       xmaxdiff = max( xmaxdiff ,x[i] - x[i-1] - 1 );
       ymaxdiff = max( ymaxdiff ,y[i] - y[i-1] - 1 );

    }
    
    cout << xmaxdiff * ymaxdiff << endl;
    
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





