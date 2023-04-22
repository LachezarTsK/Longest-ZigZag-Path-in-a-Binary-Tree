
/**
 * @param {TreeNode} root
 * @return {number}
 */
var longestZigZag = function (root) {
    this.longestZigZagPath = 0;
    depthFirstSearchForLongestZigZagPath(root.left, 1, 0);
    depthFirstSearchForLongestZigZagPath(root.right, 0, 1);
    return this.longestZigZagPath;
};

/**
 * @param {TreeNode} root
 * @param {number} lengthPathFromLeft
 * @param {number} lengthPathFromRight  
 * @return {number}
 */
function depthFirstSearchForLongestZigZagPath(root, lengthPathFromLeft, lengthPathFromRight) {
    if (root === null) {
        return;
    }
    this.longestZigZagPath = Math.max(this.longestZigZagPath, lengthPathFromLeft + lengthPathFromRight);
    depthFirstSearchForLongestZigZagPath(root.left, ++lengthPathFromRight, 0);
    depthFirstSearchForLongestZigZagPath(root.right, 0, ++lengthPathFromLeft);
}

/*
 Function TreeNode is in-built in the solution file on leetcode.com. 
 When running the code on the website, do not include this function.
 */
function TreeNode(val, left, right) {
    this.val = (val === undefined ? 0 : val);
    this.left = (left === undefined ? null : left);
    this.right = (right === undefined ? null : right);
}
