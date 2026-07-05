class Solution {
public:
    int maximumSwap(int nums) {
        string num=to_string(nums);
        int rmax=-1,l1=-1,l2=-1;
        for(int i=num.size()-1;i>=0;i--){
            if(rmax==-1 || num[i]>num[rmax]) rmax=i;
            else if(num[i]<num[rmax]){
                l1=i;
                l2=rmax;
            }
        }
        if(l1!=-1 && l2!=-1) swap(num[l1],num[l2]);
        return stoi(num);
    }
};