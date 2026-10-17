class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, int> freq;

        for (auto k : s) {
            freq[k]++;
        }

        unordered_map<char, int> fre;

        for (auto q : t) {
            fre[q]++;
        }

        return freq == fre;
    }
};