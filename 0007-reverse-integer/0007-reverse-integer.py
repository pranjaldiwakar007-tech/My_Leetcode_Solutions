class Solution:
    def reverse(self, x: int) -> int:
        v=str(x)
        arr=list(v)
        arr.reverse()
        if arr[-1]=='-':
            arr.pop()
            arr.insert(0,'-')
        while len(arr)>1 and arr[-1]=='0':
            arr.pop()
        w=int(''.join(arr))
        if w<-2**(31) or w>2**(31)-1:
            return 0
        return w