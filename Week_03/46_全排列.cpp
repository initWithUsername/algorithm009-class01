class Solution {
public:
    vector<vector<int> > permute(vector<int> &num) {
	    vector<vector<int> > res;
	    permuteRecu(res, num, 0);
	    return res;
    }
    
	void permuteRecu(vector<vector<int> > &res, vector<int> &num, int begin)	
    {
		if (begin >= num.size()) {
		    res.push_back(num);
		    return;
		}
		
		for (int i = begin; i < num.size(); i++) {
		    swap(num[begin], num[i]);
		    permuteRecu(res, num, begin + 1);
		    swap(num[begin], num[i]);
		}
    }
};