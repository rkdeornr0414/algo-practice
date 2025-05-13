class Solution {
    public:
        bool isAnagram(string s, string t) {
            if (s.length() != t.length()) {
                return false;
            }
    
            unordered_map<char, int> counter; //해시맵 생성
    
            for (char ch : s) {
                counter[ch] = counter[ch] + 1; // s 문자열의 각 문자에 대해 카운트 증가 s = "anagram" → {a:3, n:1, g:1, r:1, m:1}
            }
    
            for (char ch : t) {
                if (counter.find(ch) == counter.end() || counter[ch] == 0) { //해당 문자가 없거나 이미 0이라면 → false
                    return false;
                }
                counter[ch] = counter[ch] - 1; //있으면 → 카운트 감소
            }
    
            return true;        
        }
    };