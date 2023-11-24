class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int small=nums[0];
        // int len= nums.size();
        int large=nums[nums.size()-1];
        int res=min(small, large);
        while(res>0){
            if(small%res==0 && large% res== 0){
                return res;
            }
            res--;
        }
        return 1;
    }
};