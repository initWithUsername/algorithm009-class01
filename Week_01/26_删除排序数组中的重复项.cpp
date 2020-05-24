class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() < 1)
        {
            return 0;
        }
        
        int k =  0; //k代表已去重元素的位置
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] != nums[k])
            {
                nums[++k] = nums[i];
            }
            
        }
        
        return k+1;
    }
};