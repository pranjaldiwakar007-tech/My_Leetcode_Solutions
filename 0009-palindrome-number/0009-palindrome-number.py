class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x<0:
            return False
        n=str(x)
        arr=[]
        arr=list(n)
        arr.reverse()
        nnn=''.join(arr)
        if n==nnn:
            return True
        return False