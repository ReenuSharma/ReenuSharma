//greedy approch
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        int m=queries.size();
        vector<int> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<queries.size();i++)
        {
            int sum=queries[i];
            int count=0;
            for(int j=0;j<nums.size();j++)
            {
                if(sum-nums[j]>=0)
                {
                    count++;
                    sum-=nums[j];
                }
            }
            ans.push_back(count);
        }
        return ans;
        
    }
};