#include<bits/stdc++.h> 
using namespace std;
// Insertion sort approach
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        int key,j;
        if(n==1 || n==0)return;
        for(int i= 1; i<n;i++){
            key = nums[i];
          j= i-1;
            while(j>=0 && nums[j]>key ){
                nums[j+1] = nums[j];
                j--;
            }
            nums[j+1]= key;
            
        }
        
        return;
        
    }
};

//three pointer approach 
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        int key,j,i,mid;
        if(n==1 || n==0)return;
        i =0;
        mid = 0 ;
        j=n-1;
        
        while(mid<=j){
            switch(nums[mid]){
                case 0:swap(nums[mid++],nums[i++]);
                    break;
                case 1:mid++;break;
                case 2: swap(nums[j--],nums[mid]);break;
                    
                    
            }
        }
        
        
        return;
        
    }
};