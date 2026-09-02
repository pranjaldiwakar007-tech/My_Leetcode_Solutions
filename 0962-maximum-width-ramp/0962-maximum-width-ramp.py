class Solution:
    def maxWidthRamp(self, nums: List[int]) -> int:
        n=len(nums)
        arr=[0]*n
        for i in range(n):
            arr[i]=i
        arr.sort(key=lambda x:(nums[x],x))
        mini_i=n
        maxi=0
        for i in arr:
            maxi=max(maxi,i-mini_i)
            mini_i=min(mini_i,i)
        return maxi