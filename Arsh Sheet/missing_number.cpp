#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
 


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n= nums.size();
        int sum =n*(n+1)/2;
        int check =0 ;
        for(auto num:nums){
            check+=num;
        }
        return (sum-check);
    }
};