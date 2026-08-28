class Solution:
    def findPermutationDifference(self, s: str, t: str) -> int:
        mpp={}
        cnt=0
        for i in range(len(t)):
            mpp[t[i]]=i
        for i in range(len(s)):
            if s[i] in mpp:
                cnt+=abs(i-mpp[s[i]])
        return cnt