class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        mpp={}
        l=0
        ans=0
        for i in range(len(s)):
            # mpp[s[i]]+=1
            mpp[s[i]]=mpp.get(s[i],0)+1
            while mpp.get(s[i],0)>1:
                mpp[s[l]]-=1
                l+=1
            ans=max(ans,i-l+1)
        return ans