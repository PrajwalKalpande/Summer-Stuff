#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vil;
typedef vector<vector<int>> vii;
#define FOR(i, n, m) for (int(i) = int(m); (i) < (n); (i)++)

  
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
// solution comes here
int t,x,y; 
cin>>t;
while(t--){
cin>>x>>y;
long a = 500;
long b= 1000;
long ans = max((a-x*2 + b - (x+y)*4),(b - y*4 + a -2*(x+y)));
cout<<ans<<"\n";

}
}
