1class Solution {
2public:
3    void dfs(vector<vector<int>>& graph, int source,int dest,vector<int>& temp, vector<vector<int>>& result){
4        temp.push_back(source);
5        if(source==dest){
6            result.push_back(temp);
7        }
8        else{
9            for(int & v:graph[source]) dfs(graph,v,dest,temp,result);
10        } 
11        temp.pop_back();
12    }
13    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
14        int n=graph.size();
15        int source=0;
16        int dest=n-1;
17        vector<vector<int>> result;
18        vector<int> temp;
19        dfs(graph,source,dest,temp,result);
20        return result; 
21    }
22};