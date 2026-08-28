class Solution:
    def isPossible(self,n,freq,cur,mid,target):
        freq=freq[:]
        for i in range(25,-1,-1):
            while freq[i]:
                cur+=chr(ord('a')+i)
                freq[i]-=1
        if mid != '#':
            temp=cur
            cur+=mid
            temp=temp[::-1]
            cur+=temp
        else:
            temp=cur
            temp=temp[::-1]
            cur+=temp
        if cur>target:
            return cur
        return ""
    def lexPalindromicPermutation(self,s:str,target:str)->str:
        n=len(s)
        if n==1:
            if s>target:
                return s
            else:
                return ""
        freq=[0]*26
        for i in s:
            freq[ord(i)-ord('a')]+=1
        mid='#'
        oddcount=0
        for i in range(26):
            if freq[i]%2:
                mid=chr(ord('a')+i)
                freq[i]-=1
                oddcount+=1
            freq[i]=freq[i]//2
            if oddcount>=2:
                return ""
        n=n//2
        res=""
        prefix=""
        for i in range(n):
            cur=prefix
            isthere=False
            for j in range(26):
                if freq[j]:
                    freq[j]-=1
                    cur+=chr(ord('a')+j)
                    ispos=self.isPossible(n,freq,cur,mid,target)
                    if ispos != "":
                        prefix=cur
                        isthere=True
                        if res=="":
                            res=ispos
                        else:
                            res=min(res,ispos)
                        break
                    freq[j]+=1
                    cur=cur[:-1]
                    # cur.pop()
            if not isthere:
                return ""
        return res