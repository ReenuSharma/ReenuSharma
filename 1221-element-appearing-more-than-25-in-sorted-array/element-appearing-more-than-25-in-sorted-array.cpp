class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        int twofive= arr.size()/4;
        for(auto& m: mp){
            if(m.second>twofive){
                return m.first;
            }
        }
        return arr[0];
    }
};