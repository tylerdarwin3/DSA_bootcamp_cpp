class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int running = 0;
        int total = 0;
        unordered_map<int,int> sumFrequency;
        sumFrequency[0] = 1;

        for (int i = 0; i < nums.size(); i++){
            running += nums[i];
            int targetSum = running - k;

            if (sumFrequency.find(targetSum) != sumFrequency.end()){
                total += sumFrequency[targetSum];
            }

            sumFrequency[running]++;
        }
        return total;
    }
};