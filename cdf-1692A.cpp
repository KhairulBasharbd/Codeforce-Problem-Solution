#include <bits/stdc++.h>
using namespace std;

void solve(){
    __int64 a,b,c,d;
    cin >>a>>b>>c>>d;
        int x = 0;
        if(b>a){
            x++;
        }
        if(c>a){
            x++;
        }
        if(d>a){
            x++;
        }
        cout <<x <<endl;
}

int main(){

    __int64 t;

    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    

return 0;
}

