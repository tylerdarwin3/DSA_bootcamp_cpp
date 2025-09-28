class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int mod = 1e9 + 7;

        vector<int> psee(n, -1); // Previous smaller or equal element index
        vector<int> nse(n,n); // Next smaller element index

        stack<int> myStack;
        for (int i = 0; i < n; i++){
            while(!myStack.empty() && arr[myStack.top()] > arr[i]){
                myStack.pop();
            }
            if (!myStack.empty()){
                psee[i] = myStack.top();
            }
            myStack.push(i);
        }

        while (!myStack.empty()){
            myStack.pop();
        }

        for (int i = n - 1; i >= 0; i--){
            while (!myStack.empty() && arr[myStack.top()] >= arr[i]){
                myStack.pop();
            }
            if (!myStack.empty()){
                nse[i] = myStack.top();
            }
            myStack.push(i);
        }

        long long sum = 0;
        for (int i = 0; i < n; i++){
            long long left = i - psee[i]; // number of valid starting positions
            long long right = nse[i] - i; // number of valid ending positions
            long long freq = left * right; // total subarrays where arr[i] is minimum
            long long contribution = (freq * arr[i]) % mod;
            sum = (sum + contribution) % mod;
        }

        return (int)sum;
    }
};