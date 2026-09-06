from collections import deque
class Solution:
    def numIslands(self, nums: List[List[str]]) -> int:
        n=len(nums)
        m=len(nums[0])
        vis=[[0]*m for _ in range(n)]
        q=deque()
        cnt=0
        dr=[1,0,-1,0]
        dc=[0,1,0,-1]
        for i in range(len(nums)):
            for j in range(len(nums[0])):
                if vis[i][j]==0 and nums[i][j]=='1':
                    vis[i][j]=1
                    cnt+=1
                    q.append((i,j))
                    while q:
                        r,c=q.popleft()
                        for k in range(4):
                            row=dr[k]+r
                            col=dc[k]+c
                            if row>=0 and row<n and col>=0 and col<m and vis[row][col]==0 and nums[row][col]=='1':
                                vis[row][col]=1
                                q.append((row,col))
        return cnt
