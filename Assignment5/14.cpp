class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;

        for (int& cur : asteroids){
            bool exploded = false;
            // while there are right-moving asteroids on the stack and the current asteroid is moving left
            while(!stk.empty() && stk.top() > 0 && cur < 0){
                int prev = stk.top();
                if (abs(prev) > abs(cur)){
                    exploded = true;
                    break;
                } else if (abs(prev) == abs(cur)){
                    stk.pop();
                    exploded = true;
                    break;
                } else{
                    stk.pop();
                }
            }
            if (!exploded){
                stk.push(cur);
            }
        }
        vector<int> result;
        while (!stk.empty()){
            result.insert(result.begin(), stk.top());
            stk.pop();
        }
        return result;
    }
};