class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int low= 0; int high= m*n-1;
        int mid;
        int temp;
        while(low<=high){
            mid= (low+high)/2;
            temp=matrix[mid/n][mid%n];
            if(temp==target){return true;}
            if(temp<target)low=mid+1;
            else{
                high = mid-1;
            }
        }
         return false;
        
        
        
        
    }
};