#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);


void solve() {
     
    int n, moves ;
    cin >> n >> moves ;
    string s; cin >> s ;
    vector <int> ans (n);
    for(int i=0; i<n; i++ ) ans[i] = s[i] - 'a';
    
    int i=0; int maxi=0;
    while(i < n && ans[i] <= moves)
    {
        maxi = max( maxi , ans[i] );
        ans [i] = 0;
        i++;
        
    }
    int rem_moves = moves - maxi ;
    if( i < n && rem_moves > 0)
    {
        int start = ans [i];
        int end = ans[i] - rem_moves ;
        
         for(int j=i; j<n; j++ )
         {
             if( ans[j] >= end && ans [j] <= start )
             ans[j] = end ;
         }
    }
    
    
    for(int j=i; j<n; j++ )
    {
        if( ans[j] <= maxi )
        ans[j] = 0;
    }
       
       
    string answer (n , ' ') ;  
   for(int j=0; j<n; j++ )
   {
       answer[j] = 'a' + ans[j];
   }
   
   cout << answer << endl;
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



// aaa
// agaa
// bnbbabb
// aapp

