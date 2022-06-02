// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
    
public:

int sum;
void solve(vector<int> arr,int n ,vector<int>& ans){
        if(n<=0){
            ans.push_back(sum);
            return;}
    sum+=arr[n-1];
    solve(arr,n-1,ans); 
    sum-=arr[n-1];
     solve(arr,n-1,ans); 
    return;
    
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        int temp; 
        sum=0;
        vector<int> ans;
        solve(arr,N,ans); 
        return ans;
        
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends