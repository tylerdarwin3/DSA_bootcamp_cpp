class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;
        deque<int> dq; // stores indices

        for (int i = 0; i < nums.size(); i++){
            // remove indices not in the current window
            if (!dq.empty() && dq.front() < i - k + 1){
                dq.pop_front();
            }
            // remove indices of smaller elements from the back
            while (!dq.empty() && nums[i] >= nums[dq.back()]){
                dq.pop_back();
            }
            // add current element's index
            dq.push_back(i);
            // add maximum of current window to result
            if (i >= k - 1){
                res.push_back(nums[dq.front()]);
            }
        }
        return res;
    }
};