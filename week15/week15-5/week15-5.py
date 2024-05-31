#Week15-5.py
#LeetCode 1208. Get Equal Substrings Within Budget [Python ver.]
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        ans = 0
        N = len(s)
        j = 0 #尾巴
        for i in range(N): #頭是i 先用python把字串的迴圈寫出來
            maxCost -= abs(ord(s[i]) - ord(t[i])) #毛毛蟲的頭i 吃葉子
            while maxCost < 0: #預算不夠，變負的
                maxCost += abs(ord(s[j]) - ord(t[j]))
                j +=1 #尾巴j往右縮
            ans = max(ans, i-j+1) #頭i - 尾j + 1 is毛毛蟲的長度
        return ans