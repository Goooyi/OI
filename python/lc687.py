# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
        
class Solution:
    def longestUnivaluePath(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0

        counter = 0
        res = 0
        previous = None
        
        def travise(root,val):
            nonlocal counter,res,previous
            if not root:
                return 0
            if val is None:
                res = res.max(travise(root.left,root.val) + travise(root.left,root.val) + 1)
            else:
                if root.val == val:
                    return travise(root.left,root.val) + travise(root.left,root.val) + 1
                else:
                    return 0

            travise(root.left,None)
            travise(root.right,None)
        

        travise(root,None)
        return res