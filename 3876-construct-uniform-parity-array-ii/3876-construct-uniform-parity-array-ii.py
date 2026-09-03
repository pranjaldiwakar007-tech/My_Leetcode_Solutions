class Solution:
    def uniformArray(self, nums: list[int]) -> bool:
        mn=float('inf')
        oddCount=0
        for i in nums:
            mn=min(mn,i)
            if(i%2==1):
                oddCount+=1
        if mn%2==1 or oddCount==0:
            return True
        return False