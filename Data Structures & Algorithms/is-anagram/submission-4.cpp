class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()){
            return false;
        }

        unordered_map<char, int> c1;
        unordered_map<char, int> c2;

        for (char letra : s) {
            c1[letra]++;
        }

        for (char letra : t) {
            c2[letra]++;
        }

        return c1 == c2;

    }
};
