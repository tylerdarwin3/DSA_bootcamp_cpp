class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left = 1;
        int right = *max_element(nums.begin(), nums.end());

        while (left < right){
            int mid = (left + right) / 2;
            int sum = 0;
            for (const int num: nums){
                float numDivided = (float)num/(float)mid;
                int iNumDivided = num/mid;
                if (numDivided == iNumDivided){
                    sum += iNumDivided;
                }else{
                    sum += iNumDivided + 1;
                }
            }
            if (sum <= threshold){
                right = mid;
            }else{
                left = mid + 1;
            }
        }
        return left;
    }
};