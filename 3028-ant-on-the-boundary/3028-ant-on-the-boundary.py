class Solution:
    def returnToBoundaryCount(self, nums: List[int]) -> int:
        cnt=0
        s=0
        for i in nums:
            s+=i
            if s==0:
                cnt+=1
        return cnt