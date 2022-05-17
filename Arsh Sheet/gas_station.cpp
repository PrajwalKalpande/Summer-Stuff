#include <bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define PB push_back
#define INF 1000000007
#define MP make_pair
using namespace std;
//Approach 1
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0 ; 
        int end=1,fuel=0; 
        int n= gas.size();
        int changed= 0;
        for(int i=0; i<n;i++){
            
            fuel+=(gas[i]-cost[i]);
            if(fuel<0){
                start= (i+1)%n;
                fuel=0;
                changed =1;
                continue;
            }
        }
        if(start==0 && changed )return -1;
        for(int i=0;i<start;i++){
        fuel+=(gas[i]-cost[i]);
            if(fuel<0)return -1;
        }
        
        return start;
        return -1;
    }
};

//Improvised Approach  
//just replace second for loop by keeping track of deficit 
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = 0 ; 
        int end=1,fuel=0; 
        int n= gas.size();
        int changed= 0;
        int deficit =0;
        for(int i=0; i<n;i++){
            
            fuel+=(gas[i]-cost[i]);
            if(fuel<0){
                deficit+=fuel;
                start= (i+1)%n;
                fuel=0;
                changed =1;
                continue;
            } 
            
        }
        if(start==0 && changed )return -1;
        if(deficit+fuel>=0) return start;
        return -1;
    }
};