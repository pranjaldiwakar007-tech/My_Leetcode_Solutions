class Solution:
    def findPermutationDifference(self, s: str, t: str) -> int:
        mp={}
        cnt=0
        for i in range(len(t)):
            mp[t[i]]=i
        for i in range(len(s)):
            if s[i] in mp:
                cnt+=abs(i-mp[s[i]])
        return cnt