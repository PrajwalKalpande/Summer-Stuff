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
int t,n,ltime,start; 
cin>>t;
string s;
while(t--){
cin>>n;
 ltime=0;
    start=0;
FOR(i,n,0){
    cin>>s;
   
    if(s[0]=='L')ltime++;
    else{start++;}
   
}
 cout<<start<<" "<<ltime<<"\n";
}
}
