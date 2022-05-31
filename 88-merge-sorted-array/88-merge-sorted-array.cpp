class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums1_ext(m);
        for(int i=0;i<m;i++)
        {
            nums1_ext[i]=nums1[i];
        }
        int p1=0;
        int p2=0;
        for(int i=0;i<m+n;i++)
        {
            if(p2>=n||(p1<m && nums1_ext[p1]<nums2[p2]))
            {
                nums1[i]=nums1_ext[p1];
                p1++;
            }
            else{
                nums1[i]=nums2[p2];
                p2++;
            }
        }
    }
};