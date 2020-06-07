class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> vec;
        combineRecu(res, vec, 1, n, k);
        return res;
    }

    void combineRecu(vector<vector<int>> &res, vector<int> &vec, int first, int n, int k)
    {
        if (vec.size() == k)
        {
            res.push_back(vec);
            return;
        }

        for (int i = first; i <= n; ++i)
        {
            vec.push_back(i);
            combineRecu(res, vec, i+1, n, k);
            vec.pop_back();
        }
    }
};