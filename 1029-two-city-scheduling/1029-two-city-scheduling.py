class Solution:
    def twoCitySchedCost(self, nums: List[List[int]]) -> int:
        nums.sort(key=lambda x:(x[0]-x[1]))
        n=int(len(nums)/2)
        tot=0
        for i in range(n):
            tot+=nums[i][0]
            tot+=nums[i+n][1]
        return tot