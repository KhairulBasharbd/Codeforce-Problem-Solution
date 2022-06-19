#include <bits/stdc++.h>
//typedef long long  ll;
using namespace std;

void solve()
{
	int n, x,m;
	cin >> n;
    m =n;
	set<int> a;
	while(m--)
	{
		cin >> x;
		a.insert(x);
	}
	if((n-a.size())%2 == 0)
	{
		cout << a.size() << endl;
	}
	else
	{
		cout << a.size()-1 << endl;
	}
}

int main(){
	int t ;
	cin >> t;
	while (t--) {
		solve();
	}
}