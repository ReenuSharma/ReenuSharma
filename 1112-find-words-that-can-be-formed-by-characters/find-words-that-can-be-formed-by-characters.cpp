class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int chars_size=chars.length();
        int sum=0;
        vector<int> freq_chars(26, 0);
        for(auto ch: chars){
            freq_chars[ch-'a']++;
        }
        for(auto word: words){
            bool flag=true;
            vector<int> freq_word(26, 0);
            for(auto ch: word){
                freq_word[ch-'a']++;
            }
            for(auto ch: word){
                if(freq_word[ch-'a']>freq_chars[ch-'a']){
                     flag=false;
                     break;
                }     
            }
            if(flag){
                sum+=word.length();
            }
        }
        return sum;
    }
};