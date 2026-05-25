class Solution {
public:
    void dfs(vector<vector<int>>& graph, int source,int dest,vector<int>& temp, vector<vector<int>>& result){
        temp.push_back(source);
        if(source==dest){
            result.push_back(temp);
        }
        else{
            for(int & v:graph[source]) dfs(graph,v,dest,temp,result);
        } 
        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        int source=0;
        int dest=n-1;
        vector<vector<int>> result;
        vector<int> temp;
        dfs(graph,source,dest,temp,result);
        return result; 
    }
};