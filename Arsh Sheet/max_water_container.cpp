#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
 
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
     int n= height.size();
     if(n==1)return 0;
        int left=0,right= n-1;
        int ans= 0;
        while(left<right){
            ans=max(ans,(right-left)*min(height[left],height[right]));
            if(height[left]<height[right]){
                left++;
                
            }
            else{right--;
                
            }
        }
        return ans;
    }
};