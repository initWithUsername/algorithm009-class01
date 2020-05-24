class Solution {
public:
    void moveZeroes(vector<int>& nums) {

		for (int slow = 0,  fast = 0; fast < nums.size(); ++fast){

			if (nums[fast])
			{
                if (slow != fast)
                {
                    swap(nums[slow], nums[fast]);
                }

                slow++;	
			}
		}
    }
};