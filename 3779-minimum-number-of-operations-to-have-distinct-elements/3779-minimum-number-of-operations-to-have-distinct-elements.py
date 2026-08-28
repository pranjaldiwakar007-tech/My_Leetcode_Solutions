class Solution:
    def minOperations(self, nums: List[int]) -> int:
        # freq={}
        seen=set()
        n=len(nums)
        # for i in range(n):
        #     freq[nums[i]]=freq.get(nums[i],0)+1
        for i in range(n-1,-1,-1):
            if nums[i] in seen:
                return (i+3)//3
            # freq[nums[i]]-=1
            seen.add(nums[i])
        return 0