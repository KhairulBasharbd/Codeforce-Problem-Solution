/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n[10000],a=0,b=0,c=0;
    cin >>t;
    for (int i = 0; i < t; i++)
    {
        cin >>n[i];
    }

    for (int i = 0; i < t; i++)
    {
        if( n[i]%3 == 0){
            a=n[i]/3; b=n[i]/3 +1; c=n[i]/3 -1;
        }
        else if( n[i]%3 == 1){
             a=n[i]/3; b=n[i]/3 +2; c=n[i]/3 -1;
        }
        else if( n[i]%3 == 2){
             a=n[i]/3 +1; b=n[i]/3 +2; c=n[i]/3 -1;
        }

        cout <<a<<" "<<b<<" "<<c<<"\n";
    }
    
    

    return 0;
}*/

#include <bits/stdc++.h>
 
using namespace std;
 
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define sz(v) (int)v.size()
#define all(v) v.begin(),v.end()
#define eb emplace_back
 
 
 
void solve() {
    int n; 
    cin >> n;
    for (int a = 3; a < n; a++) {
        int c = (n - a) / 2;
        int b = n - a - c;
        if (c > 1 && b+1 < a) {
            c--;
            b++;
        }
        if (a > b && b > c) {
            cout << b << ' ' << a << ' ' << c << endl;
            return;
        }
    }
}
 
int main() {
    int t;
    cin >> t;
 
    forn(tt, t) {
        solve();
    }
}