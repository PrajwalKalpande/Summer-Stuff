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
int t,n; 
cin>>t;
string s;
while(t--){
cin>>n;
cin>>s;
long ans =1;
FOR(i,n,0){
    switch(s[i]){
        case 'c': ans= (ans*2)%INF;
        break;
        case 'g': ans= (ans*2)%INF;
        break;
        case 'l': ans= (ans*2)%INF;
        break;
        case 'r': ans= (ans*2)%INF;
        break;
        default:  break;
        

    }
}
cout<<ans<<"\n";

}
}
