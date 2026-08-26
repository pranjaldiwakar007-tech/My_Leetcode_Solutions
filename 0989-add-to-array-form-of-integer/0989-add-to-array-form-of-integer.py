class Solution:
    def addToArrayForm(self, num: List[int], k: int) -> List[int]:
        cnt=0
        s=0
        arr=[]
        for i in reversed(num):
            s+=i*pow(10,cnt)
            cnt+=1
        s+=k
        n=len(num)
        # p=n-1
        while s>0:
            arr.append(s%10)
            s//=10
        arr.reverse()
        return arr