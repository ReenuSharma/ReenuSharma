class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        unordered_map<int, vector<int>>mp;
        for(auto & e: edges){
            mp[e[0]].push_back(e[1]);
            mp[e[1]].push_back(e[0]);
        }
        vector<bool> visited(n,0);
        queue<int> q;
        visited[source]=1;
        q.push(source);
        while(!q.empty()){
            int cur=q.front();
            q.pop();
            if(cur==destination){
                return 1;
            }
            for(auto &node: mp[cur]){
                if(!visited[node]){
                    q.push(node);
                    visited[node]=1;
                }
            }
        }
        return false;
    }
};