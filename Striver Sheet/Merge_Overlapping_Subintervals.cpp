#include <bits/stdc++.h>
 
using namespace std;
 
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end()) ;
        vector<vector<int>> ans;
        
       int start= intervals[0][0];
        int end= intervals[0][1];
        int k = 0;
     
        for(int i = 0;i<intervals.size()-1;i++){
            
           if(end<intervals[i+1][0]){
                ans[k]={start,end};
               k++;
               start = intervals[i+1][0];
               end = intervals[i+1][1];
           }
            else{
                end = max(intervals[i+1][1],end);
                
            }
            
        }
        
        ans.push_back({start,end});
     return ans;         
    }
};
