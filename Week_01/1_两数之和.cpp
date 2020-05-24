class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            map<int, int>::iterator it = m.find(target - nums[i]);
            if (it != m.end())
            {
                res.push_back(it->second);
                res.push_back(i);
                return res;
            }
            
            m.insert(pair<int, int>(nums[i], i));
        }

        return res;
    }
};