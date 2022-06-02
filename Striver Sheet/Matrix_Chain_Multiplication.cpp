#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;

class Solution{
public:
int dp[100][100];

    int solve(int arr[],int i, int j){
        if(i==j)return 0;
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
  
        
        int ans = INT_MAX;
        for(int  k=i;k<j;k++){
            ans = min(ans,arr[i-1]*arr[k]*arr[j]+solve(arr,i,k)+solve(arr,k+1,j));
        }
       dp[i][j]=ans;
            
     
        return ans ;
        
    }
    int matrixMultiplication(int N, int arr[])
    {
        // code here
         memset(dp,-1,sizeof(dp));
         solve(arr,1,N-1);
        
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends
}
