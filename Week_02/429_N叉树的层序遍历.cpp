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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if (root == NULL)
        {
            return res;
        }

        deque<Node*> dq;
        dq.push_back(root);
        while (!dq.empty())
        {
            int size = dq.size();
            vector<int> tmp;
            for (int i = 0; i < size; ++i)
            {
                Node *node = dq.front();
                dq.pop_front();
                tmp.push_back(node->val);
                for (int j = 0; j < node->children.size(); ++j)
                {
                    dq.push_back(node->children[j]);
                }
            }

            res.push_back(tmp);
        }

        return res;
    }
};

//recursion
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
      vector<vector<int>> res;
      if (root != NULL)
      {
          traverseNodeRecu(root, 0, res);
      }

      return res;
    }

    void traverseNodeRecu(Node *node, int level, vector<vector<int>> &res)
    {
        if (res.size() <= level)
        {
            vector<int> tmp;
            res.push_back(tmp);
        }

        res[level].push_back(node->val);
        for (int i = 0; i < node->children.size(); ++i)
        {
            traverseNodeRecu(node->children[i], level+1, res);
        }
    }
};