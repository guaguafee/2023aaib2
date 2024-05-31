#Week15-1.py
#LeetCode 3158. Find the XOR of Numbers Which Appear Twice [Python ver.]
class Solution:
    def duplicateNumbersXOR(self, nums: List[int]) -> int:
        table = {} #大括號:table[num] 對應的次數
        for num in nums: #nums 每個數字倫一次
            if num in table: #出現過的話
                table[num] +=1 #次數加1
            else:
                table[num] = 1 #第1次出現
        #print(table) #答案還沒算出來

        ans = 0
        for num in table: #把table裡全部的數字輪一次
            if table[num] ==2: #如果數字剛好出現2次
                ans = ans^num #把答案照題目要求 XOR混進來
        return ans