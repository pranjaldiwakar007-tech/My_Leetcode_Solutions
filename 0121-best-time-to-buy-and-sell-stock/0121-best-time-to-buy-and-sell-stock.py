class Solution:
    def maxProfit(self, nums: List[int]) -> int:
        mini=nums[0]
        maxi=0
        for i in nums:
            if mini>i:
                mini=i
            maxi=max(maxi,i-mini)
        return maxi