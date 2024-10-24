// Solution 2: Iterative Approach using Stack

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> stk;
        TreeNode* cur = root;
        
        while (cur || !stk.empty()) {
            while (cur) {
                stk.push(cur);
                cur = cur->left;
            }
            cur = stk.top(); stk.pop();
            ans.push_back(cur->val);
            cur = cur->right;
        }
        return ans;
    }
};