class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m; 
        unordered_map<string, vector<string>>::iterator it;
        for (int i = 0; i < strs.size(); i++)
        {
            string tmp = strs[i];
            sort(tmp.begin(), tmp.end());
            m[tmp].push_back(strs[i]);
        }
        
        vector<vector<string>> res;
        for (it = m.begin(); it != m.end(); ++it)
        {
            res.push_back(it->second);
        }
        return res;
    }
};