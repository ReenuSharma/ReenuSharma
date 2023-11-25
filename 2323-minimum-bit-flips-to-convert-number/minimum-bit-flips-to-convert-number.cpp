// class Solution {
// public:
//     int minBitFlips(int start, int goal) {
        
//         int a = (start ^ goal); // this will do xor of given numbers
//            //now count set bits
//         int count = 0; 
//         while(a){
//             if(a&1){
//                 count++;
//             }
//         a = a>>1;  // this is right shift operator
//         }
//         return count;
//     }
// };

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans=0;
        string s= bitset<32> (start).to_string();
        string str= bitset<32> (goal).to_string();
        for(int i=0;i<32;i++){
            if(s[i]!=str[i]) ans++;
        }
        return ans;
    }
};
