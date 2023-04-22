
#include <algorithm>
using namespace std;

/*
Struct TreeNode is in-built in the solution file on leetcode.com.
When running the code on the website, do not include this struct.
 */
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
    
    int longestZigZagPath = 0;

public:
    int longestZigZag(TreeNode* root) {
        depthFirstSearchForLongestZigZagPath(root->left, 1, 0);
        depthFirstSearchForLongestZigZagPath(root->right, 0, 1);
        return longestZigZagPath;
    }

private:
    void depthFirstSearchForLongestZigZagPath(TreeNode* root, int lengthPathFromLeft, int lengthPathFromRight) {
        if (root == nullptr) {
            return;
        }
        longestZigZagPath = max(longestZigZagPath, lengthPathFromLeft + lengthPathFromRight);
        depthFirstSearchForLongestZigZagPath(root->left, ++lengthPathFromRight, 0);
        depthFirstSearchForLongestZigZagPath(root->right, 0, ++lengthPathFromLeft);
    }
};
