#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);


void solve() {
     
    int n, del, insert;
    cin >> n >> del >> insert ;
    vector <int> v(n);

    for(int i=0; i < n; i++ )
    cin >> v[i];

    
    int cost = 0;

    sort( all(v) );
    for(int i = 1; i < n; i++ )
    {
        while(i<n && v[i] == v[i-1])
        {
            cost += del;
            i++;
        }
    }
    v.erase(unique(v.begin(), v.end()), v.end());
    
   
    
    if( v[0] != 1 ) 
    {
        cost += insert ;
        v.insert(v.begin(), 1);
    } 


     
    n = v.size();
    int temp = cost;
    cost += (n-1) * del;

    
    for( int i = 0; i < n-1 ; i++)
    {

        cost = min( cost , temp + del * ( n - i -1));
        temp += (v[i+1] - v[i ] -1) * insert;
    }
     cost = min( cost , temp );
    cout << cost << endl;

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





