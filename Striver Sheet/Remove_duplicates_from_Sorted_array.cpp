#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=0;
        
     
        while(i<nums.size()-1){
             
            while(i<nums.size()-1 && nums[i]==nums[i+1]){i++;}
            nums[j]=nums[i];
            j++;
            i++;
        }
        if(i==nums.size()) return j;
        nums[j]=nums[nums.size()-1];
        return (j+1);
       
    }
};
