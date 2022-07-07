class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        if(n>0) {
            for(int i=0;i<m;i++) {
                
                if(nums1[i]>nums2[0]) {
                    int t = nums1[i];
                    nums1[i]=nums2[0];
                    nums2[0]=t;
                    sort(nums2.begin(), nums2.end());
                }
                
            }
            int k = m ;
            int j=0;
            while(k<m+n) {
                nums1[k++]=nums2[j++];
            }
        }
    }
};
