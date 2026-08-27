class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mpp={}
        for i in range(len(nums)):
            comp=target-nums[i]
            if   comp in mpp:
                ans=[i,mpp[comp]]
                return ans
            mpp[nums[i]]=i
        return []