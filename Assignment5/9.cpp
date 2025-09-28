class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> myStack;
        int res = 0;
        for(int i = 0; i < height.size(); i++){
            while (!myStack.empty() && height[myStack.top()] < height[i]){
                int pop_height = height[myStack.top()];
                myStack.pop();
                if (myStack.empty()){
                    break;
                }
                int distance = i - myStack.top() - 1;
                int water = min(height[myStack.top()], height[i]) - pop_height;
                res += distance * water;
            }
            myStack.push(i);
        }
        return res;
    }
};