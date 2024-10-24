// Solution 1: Recursive Approach


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorderTraversalR(root, ans);
        return ans;
    }
    
    void inorderTraversalR(TreeNode* root, vector<int>& ans) {
        if (!root) return;
        inorderTraversalR(root->left, ans);
        ans.push_back(root->val);
        inorderTraversalR(root->right, ans);
    }
};