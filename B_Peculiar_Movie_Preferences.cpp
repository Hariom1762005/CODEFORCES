#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
const int MOD = 998244353;
//vector <ll> power(31);


void solve() {
     
    int n ; cin >> n ;
    map < string , int > mp ;
    set < string > s2;
     set < string > s3;
    bool ans = false;
    bool changed = false;
    for(int i=0; i<n; i++ )
    {
        string str; cin >> str;
        if ( str.size() == 1 && !ans){ ans = true; changed = true; }
       
        else if( str.size() ==2 && !ans )
        { 
            
            s2.insert( str );
            reverse( str.begin() , str.end() );
            if( s2.count( str )){ ans = true; changed = true; }
            if( s3.count( str )){ ans = true; changed = true; }
            
        }
        else if ( !ans )
        {
            s3.insert( str );
            string temp = str;
            temp.pop_back();
             s3.insert( temp );
            reverse( str.begin() , str.end() );
            if( s3.count( str )){ ans = true; changed = true; }
            str.pop_back();
            if( s2.count( str )){ ans = true; changed = true; }
            

        }
       
    }

    
    if( ans )cout << "YES" << endl;
    else cout << "NO" << endl;
   

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

