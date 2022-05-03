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
int t,n,sum; 
cin>>t;
string s;
while(t--){
cin>>s;
n = s.length();
if(n==1){
    cout<<"Bob "<<(s[0]-'a'+1)<<"\n";
    continue;

}
sum=0;

FOR(i,n,0){
    sum+=(s[i]-'a'+1);
}

if(n&1){
    if(s[0]>s[n-1]){
        cout<<"Alice "<<sum-2*(s[n-1]-'a'+1)<<"\n";
    }
    else{
        cout<<"Alice "<<sum-2*(s[0]-'a'+1)<<"\n";
    }

}

else{

    cout<<"Alice "<<sum<<"\n";
}


}

}
