class Solution:
    def areaOfMaxDiagonal(self, nums: List[List[int]]) -> int:
        maxi=0
        area=0
        for i in range(len(nums)):
            l=nums[i][0]
            w=nums[i][1]
            ans=sqrt(l**2 + w**2)
            if ans>maxi or (ans==maxi and l*w>area):
                maxi=ans
                area=l*w
        return area