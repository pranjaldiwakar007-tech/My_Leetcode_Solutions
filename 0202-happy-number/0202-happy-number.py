class Solution:
    def isHappy(self, n: int) -> bool:
        seen=set()
        while n not in seen:
            seen.add(n)
            s=0
            temp=str(n)
            for i in temp:
                s+=int(i)**2
            if s==1: return True
            else:
                n=s
        return False