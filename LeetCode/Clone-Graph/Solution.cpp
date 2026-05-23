1/*
2// Definition for a Node.
3class Node {
4public:
5    int val;
6    vector<Node*> neighbors;
7    Node() {
8        val = 0;
9        neighbors = vector<Node*>();
10    }
11    Node(int _val) {
12        val = _val;
13        neighbors = vector<Node*>();
14    }
15    Node(int _val, vector<Node*> _neighbors) {
16        val = _val;
17        neighbors = _neighbors;
18    }
19};
20*/
21
22class Solution {
23public:
24    unordered_map<Node*,Node*> mpp;
25    void dfs(Node* node,Node* clone_node){
26            for(Node* n:node->neighbors){
27                if(mpp.find(n)==mpp.end()){
28                    Node* clone=new Node(n->val);
29                    mpp[n]=clone;
30                    clone_node->neighbors.push_back(clone);
31                    dfs(n,clone);
32                }
33                else clone_node->neighbors.push_back(mpp[n]);
34            }
35    }
36
37    Node* cloneGraph(Node* node) {
38        if(!node) return NULL;    
39        mpp.clear();
40        Node* clone_node=new Node(node->val);
41        mpp[node]=clone_node;
42        dfs(node,clone_node);
43        return clone_node;
44    }
45};