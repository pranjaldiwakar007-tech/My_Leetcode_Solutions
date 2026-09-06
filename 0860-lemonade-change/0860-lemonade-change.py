class Solution:
    def lemonadeChange(self, nums: List[int]) -> bool:
        # mpp={}
        cnt5=0
        cnt10=0
        cnt20=0
        for i in range(len(nums)):
            if nums[i]==5:
                cnt5+=1
            elif nums[i]==10:
                if cnt5>0:
                    cnt5-=1
                    cnt10+=1
                else:
                    return False
            else:
                if (cnt5>2 and cnt10==0):
                   cnt20+=1
                   cnt5-=3
                elif (cnt5>0 and cnt10>0):
                    cnt5-=1
                    cnt10-=1
                    cnt20+=1
                else:
                    return False
        return True

