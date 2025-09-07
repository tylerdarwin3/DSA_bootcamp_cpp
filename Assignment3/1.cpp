#include <vector>
using namespace std;

class Solution {
public:
    int findFirst(vector<int> arr, int x){
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        int first = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (x == arr[mid]){
                first = mid;
                high = mid - 1;
            }else if (x < arr[mid]){
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return first;
    }

    int findLast(vector<int> arr, int x){
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        int last = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (x == arr[mid]){
                last = mid;
                low = mid + 1;
            } else if (x < arr[mid]){
                high = mid - 1;
            } else{
                low = mid + 1;
            }
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findFirst(nums,target);
        int last = findLast(nums,target);
        return {first,last};
    }
};