class Solution {
public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& start, vector<int>& end) {
        int n = start.size();
        vector<pair<int,int>> meetings(n);
        for (int i = 0; i < n; i++){
            meetings[i] = {start[i], end[i]};
        }

        sort(meetings.begin(), meetings.end(), [](const pair<int,int> &a, const pair<int,int> & b){
            return a.second < b.second;
        });

        int maxMeetings = 1;
        int lastEndTime = meetings[0].second;

        for (int i = 1; i < n; i++){
            if(meetings[i].first > lastEndTime){
                maxMeetings++;
                lastEndTime = meetings[i].second;
            }
        }
        return maxMeetings;
    }
};