class Solution:
    def minimumChairs(self, nums: str) -> int:
        cnt=0
        maxi=0
        for i in nums:
            if i=='E':
                cnt+=1
            else:
                cnt-=1
            maxi=max(maxi,cnt)
        return maxi