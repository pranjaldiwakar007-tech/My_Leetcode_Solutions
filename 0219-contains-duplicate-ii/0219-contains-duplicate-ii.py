class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
        mpp={}
        l=0
        for r in range(len(nums)):
            mpp[nums[r]]=mpp.get(nums[r],0)+1
            if (mpp[nums[r]]==2):
                while r-l>k:
                    mpp[nums[l]]=mpp.get(nums[l],0)-1
                    l+=1
                if mpp[nums[r]]>=2:
                        return True
        return False