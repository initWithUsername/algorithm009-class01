class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long, vector<long>, greater<long>> pq;
        set<long> s;
        pq.push(1);
        s.insert(1);

        int nums[3] = {2, 3, 5};
        long res = 1;
        while (n != 0)
        {
            n--;
            if (n == 0)
            {
                res = pq.top();
                pq.pop();
                break;
            }

            long t = pq.top();
            pq.pop();
            for (int i = 0; i < 3; i++)
            {
                long tmp = t * nums[i];
                if (s.find(tmp) == s.end())
                {
                    pq.push(tmp);
                    s.insert(tmp);
                }
                
            }
            
            
        }
        
        return res;
    }
};