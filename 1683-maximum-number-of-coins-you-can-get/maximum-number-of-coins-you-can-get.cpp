class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int s= piles.size();
        int len=s-2;
        s=s/3;
        sort(piles.begin(), piles.end());
        int cnt=0;
        int sum=0;
        while(cnt<s){
            sum+=piles[len];
            len= len-2;
            cnt++;
        }
        return sum;
    }
};