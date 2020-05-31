/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> res;
        preorderRecu(res, root);
        return res;

    }

    void preorderRecu(vector<int> &res, Node *node)
    {
        if (node == NULL)
        {
            return;
        }

        res.push_back(node->val);
        for (int i = 0; i < node->children.size(); ++i)
        {
            preorderRecu(res, node->children[i]);
        }
    }
};


//使用stack迭代
class Solution {
public:
    vector<int> preorder(Node* root) {
       vector<int> res;
       if (root == NULL)
       {
           return res;
       }

       stack<Node*> s;
       s.push(root);
       while (!s.empty())
       {
           Node *node = s.top();
           res.push_back(node->val);
           s.pop();
           for (vector<Node*>::reverse_iterator rit = node->children.rbegin(); rit != node->children.rend(); ++rit)
           {
               s.push(*rit);
           }
       }

       return res;
    }  
};