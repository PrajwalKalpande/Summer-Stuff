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
double power(double x,int n){
    double res=1.0;
    for(int i=0;i<n;i++){
        res*=x;
    }
    return res;
}


double findNthRootOfM(int n, long long m) {
	// Write your code here.
    double low=1.0,high=m;
    double eps= 1e-6;
    
    while(high-low>eps){
     
       double mid = (high+low)/2.0;
        if(m>power(mid,n) ){low = mid;}
        else{high = mid;}
    }
    return low;
    
}



  
int main() {
ios::sync_with_stdio(0);
cin.tie(0);
// solution comes here
int m,n;
m= 7; n= 3;
cout<<findNthRootOfM(n,m) ;

 
}
