class Solution:
    def maxSubsequence(self, nums: List[int], k: int) -> List[int]:
        n=len(nums)
        temp=[]
        for i in range(len(nums)):
            temp.append((nums[i],i))
        temp.sort(reverse=True)
        # temp=temp[::-1]
        s=[]
        temp=temp[:k]
        temp.sort(key=lambda x:x[1])
        for val in temp:
            s.append(val[0])
        return s