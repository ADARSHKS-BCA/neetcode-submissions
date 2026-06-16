class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int  i=0, j=0;
        int n=nums1.size(),m=nums2.size();
        vector<double> ans;
        while(i<n&& j<m){
            if(nums1[i]<=nums2[j])  ans.push_back(nums1[i++]);
            else  ans.push_back(nums2[j++]);   
        }
        while(i<n)ans.push_back(nums1[i++]);
        while(j<m) ans.push_back(nums2[j++]);
        int  mid=ans.size();
        if(mid%2==1) return ans[mid/2];
        else return (ans[mid/ 2 - 1] + ans[mid/ 2]) / 2.0;
    }
};
