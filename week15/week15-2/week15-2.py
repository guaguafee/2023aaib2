#Week15-2.py
#LeetCode 3158. Single Number III [Python ver.]
class Solution:
    def singleNumber(self, nums: List[int]) -> List[int]:
        table = {} #大括號:table[num] 對應的次數
        for num in nums: #nums 每個數字倫一次
            if num in table: #出現過的話
                table[num] +=1 #次數加1
            else:
                table[num] = 1 #第1次出現
        #print(table) #答案還沒算出來

        ans = []
        for num in table: #把table裡全部的數字輪一次
            if table[num] ==1: #如果數字剛好出現1次
                ans.append(num)
        return ans