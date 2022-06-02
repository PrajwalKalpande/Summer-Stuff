#include<bits/stdc++.h>
using namespace std;
int main(){

}

class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int temp=-1;
        int val;
        int n = a.size();
        for(int i = n-1; i>0;i--){
            if(a[i]>a[i-1]){temp= i;break;}
    
        }
        
        if(temp==-1){
            sort(a.begin(),a.end());
            return;
        }
        temp--;
        int x =a[temp];
        int num=n;
        for(int i=temp+1;i<n;i++){
            if(a[i]<=x){
                num=i;
                break;
            }
        }
        num--;
        swap(a[num],a[temp]);
       
        sort(a.begin()+temp+1,a.end());
        return;
        
       
        
        
    }
};