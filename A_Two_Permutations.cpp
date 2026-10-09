#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);


void solve() {
     
   int n ,a ,b  ; cin >> n >> a >> b;
   

   if(a+b+2<= n || (a == b && a == n)) // 1
            cout << "Yes" << endl; 
        else
            cout << "No" << endl;
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





