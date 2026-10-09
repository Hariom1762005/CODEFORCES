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
   int count2 = 0;
   for( int i = 0; i < n ; i++)
   {
        cin >> v[i]; 
        if( v[i] == 2) count2++;
   }
    if( count2 % 2 != 0 ) cout << "-1" << endl;
    else
    {
        count2 /= 2;
        for( int i = 0; i < n ; i++)
        {
            if( v[i] == 2) count2--;
            if( count2 == 0)
            {
                cout << i+1 << endl;
                return;
            } 

        }
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





