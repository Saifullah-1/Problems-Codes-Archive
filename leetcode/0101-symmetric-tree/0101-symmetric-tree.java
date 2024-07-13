/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
        public boolean compare_node(TreeNode first, TreeNode second) {
        if (first == null && second == null)
            return true;
        else if (first == null || second == null)
            return false;
        if (first.val != second.val)
            return false;
        return compare_node(first.right, second.left) && compare_node(first.left, second.right);
    }

    public boolean isSymmetric(TreeNode root) {
        if (root.right == null && root.left == null)
            return true;
        return compare_node(root.left, root.right);
    }
}