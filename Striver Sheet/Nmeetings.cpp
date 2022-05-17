// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        if(n<=1)return n;
        // Your code here
        vector<pair<int,int>> a(n);
        for(int i=0 ;i<n;i++){
            a[i]=make_pair(end[i],start[i]);
            
        }
        sort(a.begin(),a.end());
        int i=1 ;
        int ans= 1 ;
         
        int last = a[0].first;
        while(i<n){
            if(a[i].second<=last){
                i++;
                continue;
            }
            ans++;
            last= a[i].first;
         
            i++;
            
            
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends
