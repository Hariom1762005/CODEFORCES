#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);


void solve() {
     
    int no_of_alarms , minute_limit , tolerate  ;
    cin >> no_of_alarms >> minute_limit >> tolerate ;
    vector < int > v(no_of_alarms);
    
    for( int i = 0 ; i < no_of_alarms; i++)  cin >> v[i];
    if(tolerate == 1) 
    { cout << no_of_alarms << endl; return; }
    int ans = 0;
    sort( v.begin() , v.end() );

   int i = 0 , j = tolerate - 1;
   while ( j < no_of_alarms)
   {
        while( j < no_of_alarms &&  v[j] <= v[i] + minute_limit -1 )
        {
            v[j] = -1;
            j++; ans++;
        }
        i++; j++;
        while( i < no_of_alarms &&  v[i] == -1 ) { i++; }
        
   }
   cout << ans << endl;
}
 

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t = 1;
   // cin >> t;

   
    while (t--)
    {
        solve();
    }

    return 0;
}





