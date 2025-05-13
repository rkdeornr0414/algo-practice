class Solution {
    public:
        bool isAnagram(string s, string t) {
            if (s.length() != t.length()) { // 초기 길이 체크
                return false;
            }
    
            unordered_map<char, int> sCount, tCount;
    
            for (int i = 0; i < s.length(); i++) {
                sCount[s[i]] = 1 + sCount[s[i]];
                tCount[t[i]] = 1 + tCount[t[i]];
            }
    
            return sCount == tCount;        //C++에서 unordered_map은 내부적으로 == 연산자가 정의되어 있어서, 모든 키와 값이 동일하면 true를 반환
        }
    };