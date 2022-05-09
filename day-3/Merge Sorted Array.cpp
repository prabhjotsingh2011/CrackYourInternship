class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        // ********brute force ********

       // for(int i=m;i<n+m;++i){
       //      nums1[i]=nums2[i-m];
       //  }
       //  sort(nums1.begin(),nums1.end());


        // ********** time: O(m + n)**********
        
        n --;
        m --;
        while(m >= 0 && n >= 0){
            if(nums1[m] > nums2[n]){
                nums1[m + n + 1] = nums1[m];
                m --;
            }
            else{
                nums1[m + n + 1] = nums2[n];
                n --;
            }
        }
        while(n >= 0){
            nums1[m + n + 1] = nums2[n];
            n --;
        }
    }
};