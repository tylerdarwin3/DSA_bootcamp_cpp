class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if (nums.empty()){
            return 0;
        }
        int max_val = nums[0];
        int min_val = nums[0];
        int result = max_val;
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] < 0){
                swap(max_val, min_val);
            }
            max_val = max(nums[i], max_val * nums[i]);
            min_val = min(nums[i], min_val * nums[i]);
            result = max(result, max_val);
        }
        return result;
    }
};