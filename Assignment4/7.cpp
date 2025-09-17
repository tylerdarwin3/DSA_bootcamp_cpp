class Solution {
public:
    int beautySum(string s) {
        int ans = 0;
        int n = s.size();
        const int num_characters = 26;
        for (int i = 0; i < n; i++){
            int count_array[num_characters];
            std::fill(count_array,count_array + num_characters, 0);
            for (int j = i; j < n; j++){
                count_array[s[j]-'a']++;
                int mi = 1000;
                int mx = 0;
                for (int v : count_array){
                    if (v > 0){
                        mi = min(mi, v);
                        mx = max(mx, v);
                    }
                }
                ans += mx - mi;
            }
        }
        return ans;
    }
};