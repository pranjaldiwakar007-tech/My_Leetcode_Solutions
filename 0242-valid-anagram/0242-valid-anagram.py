class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!=len(t):
            return False
        mpp={}
        for i in range(len(s)):
            mpp[s[i]]=mpp.get(s[i],0)+1
        for i in range(len(t)):
            if t[i] in mpp:
                mpp[t[i]]=mpp.get(t[i],0)-1
                if mpp[t[i]]==0:
                    mpp.pop(t[i])
            else:
                return  False
        return True