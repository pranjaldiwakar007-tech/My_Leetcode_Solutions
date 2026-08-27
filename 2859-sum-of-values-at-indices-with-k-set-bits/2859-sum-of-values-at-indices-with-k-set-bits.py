class Solution:
    def sumIndicesWithKSetBits(self, nums: List[int], k: int) -> int:
        ans=0
        for i in range(len(nums)):
            val=list(format(i,'b'))
            cnt=sum(int(x) for x in val)
            if cnt==k:
                ans+=nums[i]
        return ans