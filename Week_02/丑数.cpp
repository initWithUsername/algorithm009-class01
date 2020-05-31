#include <queue>
class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long, vector<int>, greater<int>> pq;
        set<int> s;
        pq.push(1);
        s.insert(1);

        int nums[3] = {2, 3, 5};

        while (n != 1)
        {
            n--;
            if (n == 0)
            {
                return pq.top();
            }

            int t = pq.top();
            pq.pop();
            for (int i = 0; i < nums.size(); i++)
            {
                int tmp = t * nums[i];
                if (s.find(tmp) == s.end())
                {
                    pq.push(tmp);
                    s.insert(tmp);
                }
                
            }
            
            
        }
        
    }
};