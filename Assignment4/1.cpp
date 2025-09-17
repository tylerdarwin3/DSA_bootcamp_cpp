class Solution {
public:
    string removeOuterParentheses(string s) {
        string r = "";
        int depth = 0;
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '('){
                depth++;
                if (depth > 1){
                    r += "(";
                }
            } else {
                depth--;
                if (depth == 0){
                    r += "";
                } else {
                    r += ")";
                }
            }
        }
        return r;
    }
};