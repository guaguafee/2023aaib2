class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
                #先知道左手M，右手N有多大，才能用迴圈
        M, N = len(grid), len(grid[0])

        def travel(i, j): #會往上下左右(4個方向)旅行，同時蓋章，能到的地方都走過
            if i<0 or j<0 or i>=M or j>=N: return #不能走的格子，離開
            if grid[i][j]=='0': return #走過便不能再走了

            grid[i][j] = '0'
            travel(i+1, j) #再往4個方向走
            travel(i-1, j)
            travel(i, j+1)
            travel(i, j-1)
        ans = 0
        for i in range(M):
            for j in range(N):
                if grid[i][j]=='1':
                    ans += 1
                    travel(i, j)
        return ans