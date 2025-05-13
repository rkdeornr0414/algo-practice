// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() == t.size()){
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            return s == t;
        }
        return false;
    }
};