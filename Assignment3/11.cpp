class Solution {
private:
    bool check(const vector<int> & stations, int K, double m){
        for (int i = 1; i < stations.size(); i++){
            const int diff = stations[i] - stations[i-1];
            if(diff > m){
                K -= ceil(diff/m) - 1;
                if (K < 0){
                    return false;
                }
            }
        }
        return true;
    }
public:
    double minMaxDist(vector<int> &stations, int K) {
        double kErr = 1e-6;
        double l = 0;
        double r = stations.back() - stations.front();

        while (r - l > kErr){
            const double m = (l + r) / 2;
            if(check(stations, K, m)){
                r = m;
            }else{
                l = m;
            }
        }
        return l;
    }
};