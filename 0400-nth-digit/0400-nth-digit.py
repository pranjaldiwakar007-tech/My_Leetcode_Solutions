class Solution:
    def findNthDigit(self, n: int) -> int:
        # if n<=9:
        #     return n
        digit=base=1
        while n>9*base*digit:
            n-=9*base*digit
            digit+=1
            base*=10
        q=(n-1)//digit
        r=(n-1)%digit
        return int(str(base+q)[r])        