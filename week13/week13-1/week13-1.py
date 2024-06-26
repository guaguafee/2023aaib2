#Week13-1 LeetCode 1325. Delete Leaves With a Given Value Python ver.
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val 值
#         self.left = left 左邊的小孩
#         self.right = right 右邊的小孩
class Solution:
    def removeLeafNodes(self, root: Optional[TreeNode], target: int) -> Optional[TreeNode]:
        if root==None: return root #沒東西->提早結束

        left = self.removeLeafNodes(root.left, target) #先用同一個程式，處理左半邊
        right = self.removeLeafNodes(root.right, target) #先用同一個程式，處理右半邊
        if left==None and right==None and root.val==target: #最後變葉子 ，且值同
            return None #什麼都沒有，給當初呼叫我的人(把自己刪掉)
        root.left = left
        root.right = right
        return root