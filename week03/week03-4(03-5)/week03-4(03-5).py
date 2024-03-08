#　LeetCode-----3005.Count Elements With Maximum Frequency

# You are given an array nums consisting of positive integers.Return the total frequencies of elements in nums such that those elements all have the maximum frequency.
#The frequency of an element is the number of occurrences of that element in the array.

class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        T = [0]*101 #因為數字有1-100，則陣列開101個
        best = 0 #最多的數字，出現幾次
        for num in nums: #迴圈，針對每個數字做處裡
            T[num] += 1 #這個數字num出現次數+1
            if T[num] > best: best = T[num] #
        #到這裡，T就有全部的數字出現
        #把全部最多的都加起來
        total = 0
        for t in T: #針對統計結果T裡的個數t
            if t==best: total += t
        return total  