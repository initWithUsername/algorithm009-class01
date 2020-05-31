/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inorderTraversalRecu(root, res);
        return res;

    }

    void inorderTraversalRecu(TreeNode *node, vector<int> &vec)
    {
        if (node == NULL)
        {
            return;
        }

        inorderTraversalRecu(node->left, vec);
        vec.push_back(node->val);
        inorderTraversalRecu(node->right, vec);
    }
};

//用stack迭代
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root == NULL)
        {
            return res;
        }

        stack<TreeNode*> s;
        TreeNode *cur = root;
        while (cur != NULL || !s.empty())
        {
            while (cur != NULL)
            {
                s.push(cur);
                cur = cur->left;
            }

            TreeNode *node = s.top();
            s.pop();
            res.push_back(node->val);
            cur = node->right;
        }

        return res;
    }
};