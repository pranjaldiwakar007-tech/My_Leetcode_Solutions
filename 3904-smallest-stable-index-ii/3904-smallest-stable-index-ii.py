class Solution:
    def firstStableIndex(self, nums: list[int], k: int) -> int:
        n=len(nums)
        ans=0
        glo=float('-inf')
        ansmax=float('-inf')
        for i in range(n):
            glo=max(glo,nums[i])
            if i==ans:
                ansmax=max(ansmax,nums[i])
            if nums[i]<ansmax-k:
                ans=i+1
                ansmax=glo
        return ans if ans<n else -1