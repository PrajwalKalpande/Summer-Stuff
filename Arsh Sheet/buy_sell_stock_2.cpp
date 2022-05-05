#include <bits/stdc++.h>
 
using namespace std;
 
 class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int less = prices[0];
        int total =0;
        int temp;
        for(int i=1;i<prices.size();i++){
            temp = prices[i];
            if(less>temp)less=temp;
            
            if(profit>temp-less){
                total+=profit ;
                profit=0;
                less = prices[i];
            }
            else{
            profit= temp-less;
            }
            
           
            
        }
         //for the last time we may haven't changed total simply because profit kept
        //on increasing so we need to add that last profit as well
        
        return total+profit;
    }
};

//More refined appraoch just keep adding locally
class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int profit = 0 ;
        for(int i=1; i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                profit+=prices[i]-prices[i-1];
                
            }
        }
        return profit;
    }
};