typedef long long ll;
class Solution {
public:
    int totalWaviness(int nums1, int nums2) {
        // string s="",n="";
        // int ans=0;
        // for(int i=nums1;i>0;i/=10){
        //     int x=i%10;
        //     s+=to_string(x);
        //     reverse(s.begin(),s.end());
        // }
        // for(int i=nums2;i>0;i/=10){
        //     int y=i%10;
        //     n+=to_string(y);
        //     reverse(n.begin(),n.end());
        //     s+=n;
        // }
        // for(int i=1;i<s.size()-1;i++){
        //     if((s[i]>s[i-1] && s[i]>s[i+1]) || (s[i]<s[i-1] && s[i]<s[i+1])) ans++;
        // }
        // return ans;
        ll ans=0;
        for(int i=nums1;i<=nums2;i++){
            ans+=waiver(i);
        }
        return ans;
    }
    int waiver(int nums){
        int ans=0;
        string s=to_string(nums);
        for(int i=1;i<s.size()-1;i++){
             if((s[i]>s[i-1] && s[i]>s[i+1]) || (s[i]<s[i-1] && s[i]<s[i+1])) ans++;
        }
        return ans;
    }
};