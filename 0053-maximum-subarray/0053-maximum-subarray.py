class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        cnt=0
        for i in nums:
            if i>0:
                cnt+=1
        if cnt==0:
            return max(nums)
        maxi=0
        s=0
        for i in nums:
            s+=i
            if s<0:
                s=0
            maxi=max(maxi,s)
        return maxi