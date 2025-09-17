class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freqs;
        for (char c:s){
            freqs[c]++;
        }

        vector<string> buckets(s.size() + 1);
        for(auto & kvPair : freqs){
            buckets[kvPair.second] += string(kvPair.second, kvPair.first);
        }

        string res;
        for (int i = buckets.size()-1; i>=0; i--){
            res.append(buckets[i]);
        }
        return res;
    }
};