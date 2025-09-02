class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int arrMin = 0;
        int numXor = 0;
        int rangeXor = arrMin;
        int n = nums.size();
        for (int i = 0; i < n; i++){
            numXor ^= nums[i];
            arrMin++;
            rangeXor ^= arrMin;
        }
        return numXor ^ rangeXor;
    }
};