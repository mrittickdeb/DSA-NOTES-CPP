class Solution {
public:
    vector<int> toposort(vector<int> adj[],int N){
        vector<int> indegree(N,0);
        for(int i=0;i<N;i++){
            for(auto it:adj[i]){
                indegree[it]++;
            }
        }
        queue<int> q;
        vector<int> ans;
        for(int i=0;i<N;i++){
            if(indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int node=q.front();
            ans.push_back(node);
            q.pop();
            for(auto it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0) q.push(it);
            }
        }
        return ans;
    }
    bool canFinish(int N, vector<vector<int>> arr) {
        vector<int> adj[N];
        for(auto it:arr){
            int u=it[0];
            int v=it[1];
            adj[v].push_back(u);
        }
        vector<int> topo=toposort(adj,N);
        if(topo.size()<N) return false;
        return true;
    }
};