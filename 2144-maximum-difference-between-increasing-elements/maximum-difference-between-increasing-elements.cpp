class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans =-1;
        int i=0;
        for(int j=1; j<nums.size(); j++){
            if(nums[i]>=nums[j]){
                i++;
                continue;
            }

            else{
                ans= max(ans, nums[j]-nums[i]);
                cout<<nums[i]<<"-"<<nums[j]<<": "<<ans<<"; ";
                nums[j]= nums[i];
                i++;
            }
        }
        return ans;
    }
};