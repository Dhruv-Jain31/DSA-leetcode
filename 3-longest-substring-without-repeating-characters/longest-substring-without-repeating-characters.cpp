class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0;
        int j = 0;
        int window_len = 0;
        int max_window_len = 0;

        unordered_map<char,int> m;
        while(j < s.length()){
            char ch = s[j];
            if(m.count(ch) && m[ch] >= i){
                i = m[ch] + 1;
                window_len = j - i ;
            }
            m[ch] = j;
            window_len++;
            j++;

            if(window_len > max_window_len){
                max_window_len = window_len;
            }

        }
        return max_window_len;
    }
};