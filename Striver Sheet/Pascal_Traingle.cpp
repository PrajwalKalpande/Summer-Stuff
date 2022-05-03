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


vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
	
	if(n==0)return {{}};
	vector<vector<long long int>> ans  ;
	ans.resize(n);
	ans[0]= {1};
	if(n==1)return ans;

	for(int cols= 2;cols<=n;cols++){
		vector<long long int> temp(cols) ;
		temp[0]=1;
		temp[cols-1]=1;
		for(int i =1;i<cols-1;i++){
			temp[i]=ans[cols-2][i-1]+ans[cols-2][i];
		}
	 
		ans[cols-1]= temp;
	}
	
	return ans;
	
}



int main() {
ios::sync_with_stdio(0);
cin.tie(0);
// solution comes here
int t,n; 
cin>>t;
while(t--){
cin>>n;
vector<vector<long long int>> ans(n);
ans =printPascal(n);
for(auto x:ans){
    for(auto y :x){
        cout<<y<<" ";
    }
    cout<<"\n";
}

}
}
