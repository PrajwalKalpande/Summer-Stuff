#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> a(nums.size());
        vector <int> ans(2,-1);
        for(int i =0 ;i<nums.size(); i++){
            a[i].first = nums[i];
            a[i].second = i;
            
        }
        sort(a.begin(), a.end());
        int i = 0;
        int j = nums.size()-1;
        int a1,a2;
        while(i<j){
            a1= a[i].first;
            a2 = a[j].first;
            if(a1+a2 == target){
                ans={a[i].second,a[j].second};
                return ans;
            }
            else if(a1+a2<target){
                i++;
                
            }
            else{
                j--;
            }
            
        }
        return ans;// if target not found return -1,-1
        
    }
};
