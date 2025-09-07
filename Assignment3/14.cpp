class Solution {
private:
    bool check(const vector<int> & position, int m, int minimum_magnetic_force){
        int current = position[0];
        int choose = 1;
        for (int i = 1; i < position.size(); i++){
            if (position[i] - current >= minimum_magnetic_force){
                current = position[i];
                choose++;
            }
        }
        return (choose >= m);
    }
public:
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int left = 1;
        int right = position.back() - position.front();

        while (left < right){
            int mid = right - (right-left) / 2;
            if (check(position, m, mid)){
                left = mid;
            } else {
                right = mid - 1;
            }
        }
        return left;
    }
};