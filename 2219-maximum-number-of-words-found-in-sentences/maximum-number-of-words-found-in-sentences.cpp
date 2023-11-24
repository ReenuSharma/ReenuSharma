class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int w=0;
        for(auto & words: sentences){
            int cnt=0;
            for(int i=0; i<words.size(); i++){
                if(words[i]==' '){
                    cnt++;
                }
            }
            cnt+=1;
            w=max(cnt, w);
        }
        return w;
    }
};