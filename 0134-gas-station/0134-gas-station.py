class Solution:
    def canCompleteCircuit(self, nums: List[int], val: List[int]) -> int:
        tot=0
        tank=0
        ind=0
        for i in range(len(nums)):
            diff=nums[i]-val[i]
            tot+=diff
            tank+=diff
            if tank<0:
                ind=i+1
                tank=0
        if tot<0:
            return -1
        return ind