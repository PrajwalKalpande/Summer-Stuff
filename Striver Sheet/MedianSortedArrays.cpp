class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(),n2 = nums2.size();
        int lo=0,high=2*n2;
        if(n1<n2)return findMedianSortedArrays(nums2,nums1);
        int mid1,mid2;
        int l1,l2,r1,r2;
        while(lo<=high){
            mid2= lo + (high-lo)/2;
            mid1= n1+n2-mid2;
            l1 = mid1==0 ?INT_MIN : nums1[(mid1-1)/2];
            r1 = mid1==n1*2 ? INT_MAX :nums1[(mid1)/2];
            l2 = mid2==0 ? INT_MIN : nums2[(mid2-1)/2];
            r2 = mid2==2*n2 ? INT_MAX : nums2[(mid2)/2];
            if(l1>r2)lo = mid2+1;
            else if(l2>r1) high = mid2-1;
            else return (max(l1,l2)+min(r1,r2))/2.0;
    }
        
        return -1;
    }
};
