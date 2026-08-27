class Solution:
    def smallestNumber(self, n: int, t: int) -> int:
        for i in range(n,101):
            mul=1
            w=i
            while w>0:
                x=w%10
                mul*=x
                w=w//10
            if mul%t==0:
                return i
        return 0