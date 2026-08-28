class Solution:
    def countTestedDevices(self, nums: List[int]) -> int:
        cnt=0
        for i in range(len(nums)):
            if(nums[i]>0):
                cnt+=1
                for j in range(i+1,len(nums)):
                    nums[j]=max(0,nums[j]-1)
        return cnt