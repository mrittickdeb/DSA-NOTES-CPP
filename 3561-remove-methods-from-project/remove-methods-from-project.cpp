class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> adj(n);
        vector<int> indegree(n,0);
        vector<bool> sus(n,false);
        for(auto& it:invocations){
               int u=it[0];
               int v=it[1];
               adj[u].push_back(v);
               indegree[v]++;
        }
        queue<int> q;
    q.push(k);
    sus[k]=true;
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        for(int& x:adj[curr]){
            indegree[x]--;
                if(!sus[x]){
                    q.push(x);
                    sus[x]=true;
                }
        }
    }
    vector<int> result;
    bool cannotremove=false;
    for(int i=0;i<n;i++){
        if(sus[i] && indegree[i]>0){
            cannotremove=true;
            break;
        }
        if(!sus[i]) result.push_back(i);
    }
    if(cannotremove){
        vector<int> vec(n,0);
        for(int i=0;i<n;i++){
            vec[i]=i;
        }
        return vec;
    }
    return result;
    }
};