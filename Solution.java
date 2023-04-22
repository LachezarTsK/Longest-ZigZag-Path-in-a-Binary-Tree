
public class Solution {

    private int longestZigZagPath = 0;

    public int longestZigZag(TreeNode root) {
        depthFirstSearchForLongestZigZagPath(root.left, 1, 0);
        depthFirstSearchForLongestZigZagPath(root.right, 0, 1);
        return longestZigZagPath;
    }

    private void depthFirstSearchForLongestZigZagPath(TreeNode root, int lengthPathFromLeft, int lengthPathFromRight) {
        if (root == null) {
            return;
        }
        longestZigZagPath = Math.max(longestZigZagPath, lengthPathFromLeft + lengthPathFromRight);
        depthFirstSearchForLongestZigZagPath(root.left, ++lengthPathFromRight, 0);
        depthFirstSearchForLongestZigZagPath(root.right, 0, ++lengthPathFromLeft);
    }
}

/*
Class TreeNode is in-built in the solution file on leetcode.com. 
When running the code on the website, do not include this class.
 */
class TreeNode {

    int val;
    TreeNode left;
    TreeNode right;

    TreeNode() {}

    TreeNode(int val) {
        this.val = val;
    }

    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}
