class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> mp;
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        int i=0;
        while(i<arr.size() && k){
            if(mp[arr[i]]==1){
                k--;
                if(k==0)return arr[i];
            }
            i++;
        }
        return "";
    }
};