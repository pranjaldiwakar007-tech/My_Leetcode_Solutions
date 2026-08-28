class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        mpp={}
        cnt=0
        mpp[0]=1
        s=0
        for i in range(len(nums)):
            s+=nums[i]
            if s-k in mpp:
                cnt+=mpp[s-k]
            mpp[s]=mpp.get(s,0)+1
        return cnt