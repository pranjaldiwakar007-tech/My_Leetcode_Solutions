class Solution:
    def isPalindrome(self, s: str) -> bool:
        ans=[]
        for i in range(len(s)):
            if s[i].isalnum():
                ans.append(s[i].lower())
        ans=''.join(ans)
        for i in range(len(ans)//2):
            if ans[i]!=ans[len(ans)-i-1]:
                return False
        return True