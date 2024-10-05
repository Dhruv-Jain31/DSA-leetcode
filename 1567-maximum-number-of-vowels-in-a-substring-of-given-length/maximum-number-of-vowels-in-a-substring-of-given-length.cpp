class Solution {
public:
    int maxVowels(string s, int k) {
        int i = 0;
        int j = 0;
        int count = 0;
        int max_vowels = INT_MIN;
        unordered_map<char,int> m;
        m['a'] = 1;
        m['e'] = 1;
        m['i'] = 1;
        m['o'] = 1;
        m['u'] = 1;

        for(int i = 0; i < k; i++){
            if(m.find(s[i]) != m.end()){
                count ++;
            }
        }
        max_vowels = max(max_vowels, count);
        for(int i = k; i<s.size(); i++){
            if(m.find(s[i-k]) != m.end()){
                count--;
            }
            if(m.find(s[i]) != m.end()){
                count ++;
            }
            max_vowels = max(max_vowels,count);
        }
        return max_vowels;
    }
};