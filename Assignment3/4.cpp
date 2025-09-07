class Solution {
public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        int minimum = INT_MAX;
        int index = -1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[low] <= arr[high]){
                if(arr[low] < minimum){
                    minimum = arr[low];
                    index = low;
                }
                break;
            }
            if (arr[low] <= arr[mid]){
                if(arr[low] < minimum){
                    minimum = arr[low];
                    index = low;
                }
                low = mid + 1;
            }else{
                if(arr[mid] < minimum){
                    minimum = arr[mid];
                    index = mid;
                }
                high = mid - 1;
            }
        }
        return index;
    }
};