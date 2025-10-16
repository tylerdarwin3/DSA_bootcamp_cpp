class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> merged;

        merged.push_back(intervals[0]);

        for (int i = 1; i < intervals.size(); i++){
            if (merged.back()[1] >= intervals[i][0]){
                int curr_end_time = merged.back()[1];
                merged.back()[1] = max(curr_end_time, intervals[i][1]);
            } else{
                merged.push_back(intervals[i]);
            }
        }
        return merged;
    }
};