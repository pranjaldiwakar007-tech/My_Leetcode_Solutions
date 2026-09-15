class Solution:
    def removeDuplicates(self, nums: list[int]) -> int:
        ans=set()
        for i in nums:
            ans.add(i)
        nums[:]=ans
        nums.sort()
