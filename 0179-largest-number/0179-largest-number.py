class Solution:
    def largestNumber(self, nums: List[int]) -> str:
        cnt=0
        for i in range(len(nums)):
            if nums[i]==0:
                cnt+=1
            else:
                break
            if cnt==len(nums):
                return "0"
        arr=list(map(str,nums))
        arr.sort(key=lambda x:x*10,reverse=True)
        lar=''.join(arr)
        return lar