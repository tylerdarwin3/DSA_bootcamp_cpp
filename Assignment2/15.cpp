class Solution {
    // Function to find the leaders in the array.
public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> leaders_arr;
        int n = arr.size();
        int maxFromRight = arr[n-1];
        leaders_arr.push_back(maxFromRight);

        for (int i = n - 2; i >= 0; i--){
            if (arr[i] >= maxFromRight){
                maxFromRight = arr[i];
                leaders_arr.push_back(maxFromRight);
            }
        }
        reverse(leaders_arr.begin(),leaders_arr.end());
        return leaders_arr;
    }
};