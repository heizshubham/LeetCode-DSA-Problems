// Solution 3: Morris Traversal

#include <vector>
#include <iostream>
using namespace std;


class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode* cur = root, *pre;
        
        while (cur) {
            if (cur->left) {
                pre = cur->left;
                while (pre->right) pre = pre->right;
                pre->right = cur;
                TreeNode* tmp = cur;
                cur = cur->left;
                tmp->left = nullptr;
            } else {
                ans.push_back(cur->val);
                cur = cur->right;
            }
        }
        return ans;
    }
};