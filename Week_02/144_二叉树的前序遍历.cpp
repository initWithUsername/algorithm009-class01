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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        preorderTraversalRecu(root, res);
        return res;
    }

    void preorderTraversalRecu(TreeNode *node, vector<int> &vec)
    {
        if (node == NULL)
        {
            return;
        }

        vec.push_back(node->val);
        preorderTraversalRecu(node->left, vec);
        preorderTraversalRecu(node->right, vec); 
    }
};

//使用stack迭代
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        if (root == NULL)
        {
            return res;
        }
        
        stack<TreeNode*> s;
        s.push(root);
        while (!s.empty())
        {
            TreeNode *node = s.top();
            s.pop();
            res.push_back(node->val);
            if (node ->right != NULL)
            {
                s.push(node->right);
            }
            if (node->left != NULL)
            {
                s.push(node->left);
            }    
        }   

        return res;
    }
};