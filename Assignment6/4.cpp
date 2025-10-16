class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),[](const vector<int> & a, const vector<int> & b){
            return a[1] < b[1];
        });

        int count = 0;
        int end = INT_MIN;

        for (const auto & interval : intervals){
            if(interval[0] >= end){
                end = interval[1];
                count++;
            }
        }
        return intervals.size() - count;
    }
};