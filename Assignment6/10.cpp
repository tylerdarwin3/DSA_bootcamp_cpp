class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](vector<int> & a, vector<int> & b){
            return a[1] < b[1];
        });

        int arrowCount = 0;

        long long lastArrowPosition = -(1LL << 60);

        for (auto & balloon: points){
            int balloonStart = balloon[0];
            int balloonEnd = balloon[1];

            if (balloonStart > lastArrowPosition){
                arrowCount++;
                lastArrowPosition = balloonEnd;
            }
        }
        return arrowCount;
    }
};