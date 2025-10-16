class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ret;
        bool isInsert = false;

        for (int i = 0; i < intervals.size(); i++){
            if (isInsert){
                ret.push_back(intervals[i]);
                continue;
            }

            if (newInterval[1] < intervals[i][0]){
                ret.push_back(newInterval);
                ret.push_back(intervals[i]);
                isInsert = true;
                continue;
            }

            if (newInterval[0] <= intervals[i][1] && intervals[i][0] <= newInterval[1]){
                newInterval[0] = min(newInterval[0], intervals[i][0]);
                newInterval[1] = max(newInterval[1], intervals[i][1]);
                continue;
            }

            ret.push_back(intervals[i]);
        }

        if (!isInsert){
            ret.push_back(newInterval);
        }

        return ret;

    }
};