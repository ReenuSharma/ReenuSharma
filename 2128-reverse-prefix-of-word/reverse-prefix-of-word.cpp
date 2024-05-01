class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i=0;
        while(word[i]!= ch && i< word.length()){
            i++;
        }
        if(i==word.length()) return word;
        char temp;
        for(int j=0; j<=i/2; j++){
            temp=word[j];
            word[j]=word[i-j];
            word[i-j]= temp;
            cout<<j<<" "<<i-j<<endl;
        }
        return word;
    }
};