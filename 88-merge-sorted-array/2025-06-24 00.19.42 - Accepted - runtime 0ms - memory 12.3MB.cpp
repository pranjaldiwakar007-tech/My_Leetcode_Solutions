class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     for(int i=m;i<m+n;i++){
        nums1[i]=nums2[i-m];
     }
     int len=n+m;
    int gap=len/2+(len%2);
     while(gap>0){
         int l=0,r=gap+l;
         while(r<len){
           if(nums1[l]>nums1[r]) swap(nums1[r],nums1[l]);
           l++;
           r++;
         }
         if(gap==1)break;
         gap=gap/2+(gap%2);
     }
    }
};