#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
typedef long long ll;
typedef vector<long long> vi;
typedef vector<long long> vil;
typedef vector<vector<long long>> vii;
#define FOR(i, n, m) for (long long(i) = long long(m); (i) < (n); (i)++)

  
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
// solution comes here
long long t,n,temp; 
cin>>t;
while(t--){
cin>>n;
if(n==1){
    cout<<1<<"\n";
    cout<<2<<"\n";
}
long long i=2;

while(i<=(1+2*n)){
cout<<i<<" ";
i+=2;
}
cout<<"\n";
i =3;
while(i<=(1+2*n)){
cout<<i<<" ";
i+=2;
}
cout<<"\n";


}
}
