class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        vector<int> temp_arr(k);
        for(int i = 0; i < k; i++){
            temp_arr[i] = nums[n - k + i];
        }
        for(int i = n - 1; i >= k; i--){
            nums[i] = nums[i - k];
        }
        for(int i = 0; i < k; i++){
            nums[i] = temp_arr[i];
        }
    }
};
