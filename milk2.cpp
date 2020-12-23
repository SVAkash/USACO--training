/*
ID: svakash3
PROG: milk2
LANG: C++
*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define IO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) ((a)*(b))/gcd((a),(b))
const int maxn = 1e9 + 5;
#define INF 100000000000
const int MOD = 1e9+7;
const double PI = 3.14159265358979323846264338;
const ll MAXN = 1e18;



int main() {
	ifstream cin ("milk2.in");
    ofstream cout ("milk2.out");

	int n;
	cin >> n;
	vector<pair<int,int>> v(n),v1;
	for(int i=0; i<n; i++){
		cin >> v[i].first >> v[i].second; 
	}
	sort(v.begin(),v.end());
	int ans1 = 0;
	int ans2 = 0;
	for(int i=0; i<n; i++){
		pair<int,int> x = v[i];
		while(i<n-1 && v[i+1].first <= x.second){
			i++;
			x.second=max(x.second,v[i].second);
		}
		v1.push_back(x);
	}
	for(int i=0; i<v1.size(); i++){
		ans1=max(ans1,v1[i].second-v1[i].first);
	}
	for(int i=0; i<v1.size()-1; i++){
		ans2 = max(ans2,v1[i+1].first-v1[i].second);
	}
	cout << ans1 << " " << ans2 << "\n";
}


