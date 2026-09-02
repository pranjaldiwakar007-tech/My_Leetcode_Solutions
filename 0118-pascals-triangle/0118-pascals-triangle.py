class Solution:
    def generate(self, n: int) -> List[List[int]]:
        if n==1:
            return [[1]]
        elif n==2:
            return [[1],[1,1]]
        else:
            ans=[[1],[1,1]]
            for i in range(3,n+1):
                temp=[1]
                for j in range(1,i-1):
                    temp.append(ans[i-2][j-1]+ans[i-2][j])
                temp.append(1)
                ans.append(temp)
        return ans