class Solution {
public:
    bool check(const vector<int> & arr, int k, int pageLimit){
        int cnt = 1;
        int pageSum = 0;
        for (int i = 0; i < arr.size(); i++){
            if(pageSum + arr[i] > pageLimit){
                cnt++;
                pageSum = arr[i];
            }else{
                pageSum += arr[i];
            }
        }
        return (cnt <= k);
    }

    int findPages(vector<int> &arr, int k) {
        if (k > arr.size()) return -1;

        int minPageLimit = *max_element(arr.begin(), arr.end());
        int maxPageLimit = accumulate(arr.begin(), arr.end(), 0);

        int res = -1;
        while (minPageLimit <= maxPageLimit){
            int mid = minPageLimit + (maxPageLimit - minPageLimit) / 2;
            if(check(arr, k, mid)){
                res = mid;
                maxPageLimit = mid - 1;
            }else{
                minPageLimit = mid + 1;
            }
        }
        return res;
    }
};