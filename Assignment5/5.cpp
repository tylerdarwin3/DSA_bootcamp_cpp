class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        unordered_map<char,char> matchingBrackets = {
            {')', '(',},
            {']', '['},
            {'}', '{'}
        };

        for (char c : s){
            if (matchingBrackets.find(c) != matchingBrackets.end()){
                if (myStack.empty() || myStack.top() != matchingBrackets[c]){
                    return false;
                }
                myStack.pop();
            } else{
                myStack.push(c);
            }
        }
        return myStack.empty();
    }
};