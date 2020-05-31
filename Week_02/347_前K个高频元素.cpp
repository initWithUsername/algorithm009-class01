class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> res;
        unordered_map<int, int> m; 
        for (int i = 0; i < nums.size(); ++i)
        {
            m[nums[i]]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for (unordered_map<int, int>::iterator it = m.begin(); it != m.end(); ++it)
        {
            if (pq.size() >= k)
            {
                if (it->second > pq.top().first)
                {
                    pq.pop();
                    pq.push(pair<int, int>(it->second, it->first));
                }
            }
            else
            {
                pq.push(pair<int, int>(it->second, it->first));
            }
        }

       while (!pq.empty())
       {
           res.push_back(pq.top().second);
           pq.pop();
       }
        
        return res;
    }
};