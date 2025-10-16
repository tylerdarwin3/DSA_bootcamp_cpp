class Solution {
public:
    int minMeetingRooms(vector<int> &start, vector<int> &end) {
        int n = start.size();

        int room = 0;
        int res = 0;

        sort(start.begin(),start.end());
        sort(end.begin(),end.end());

        int i = 0, j = 0;
        while (i < start.size()){
            if(start[i] < end[j]){
                room++;
                i++;
            }
            else{
                room--;
                j++;
            }
            res = max(res,room);
        }
        return res;
    }
};
