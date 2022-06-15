#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
//Optimized from 2d to 1d DP Hehe
class Solution{
		

	public:
 
	int maxSumIS(int arr[], int n)  
	{  int ans,sum;
         
        vector<int> dp(n+1,0);
        
        for(int i=n-1;i>=0;i--){
            
            for(int prev=i-1;prev>=-1;prev--){
                ans=dp[prev+1];
                if(prev==-1 || arr[prev]<arr[i]){
                    ans = max(ans,arr[i]+dp[i+1]);
                }
               dp[prev+1]=ans;
            }
           
        }
        return dp[0];
	}  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends