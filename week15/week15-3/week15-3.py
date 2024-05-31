#Week15-3.py
#寫到一半
#LeetCode 1208. Get Equal Substrings Within Budget [Python ver.]
class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        N = len(s)
        for i in range(N): #先用python把字串的迴圈寫出來
            print(s[i], t[i])

        ans = 0
        return ans