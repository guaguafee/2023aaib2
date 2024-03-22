#LeetCodec234.Palindrome Linked List Python Version
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        a = [] #先把a投成很小的短短的陣列list
        while head != None:
            a.append(head.val) # 先把hesd那一串東西，轉換成陣列a
            head = head.next
        print(a) # 先列出陣列
        
        N = len(a) # a有多少數字
        for i in range(N): # i就照回圈跑
            if a[i] != a[N-1-i]: return False # 頭尾不同
        return True