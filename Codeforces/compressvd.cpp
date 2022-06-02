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
int t,n,prev,curr,dup; 
cin>>t;
while(t--){
cin>>n;
if(n==0){cout<<0<<"\n";continue;}
cin>>prev;
dup=0;
if(n==1) {cout<<1<<"\n"; continue;}
FOR(i,n-1,0){
    cin>>curr;
    if(prev==curr)dup++;
    prev = curr;
}
cout<<n-dup<<"\n";

}
}
