class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> um;
        for (int i = 0; i < nums.size(); ++i)
        {
            unordered_map<int, int>::iterator it = um.find(target - nums[i]);
            if (it != um.end())
            {
                res.push_back(it->second);
                res.push_back(i);
                break;
            }
            um.insert(pair<int, int>(nums[i], i));
        }

        return res;
    }
};