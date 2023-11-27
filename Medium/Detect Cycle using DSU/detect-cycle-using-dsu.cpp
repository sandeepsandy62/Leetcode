//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    
    private:
    
    bool dfs(int s , int v  , vector<int>adj[] , int parent , vector<bool>&vis){
        vis[s] = true;
        
        for(auto x : adj[s]){
            if(!vis[x]) {
                if(dfs(x,v,adj,s,vis)) return true;
            }
                
            else{
                if(parent != x){
                    return true;
                }
            }
        }
        
        return false;
        
    }
    
    public:
    //Function to detect cycle using DSU in an undirected graph.
	int detectCycle(int V, vector<int>adj[])
	{
	    // Code here
	    int parent = -1 ;
	    vector<bool>vis(V,false);
	    
	    for(int i = 0 ; i < V ; i++){
	        if(!vis[i]){
	            if(dfs(i,V,adj,parent,vis)) return true;
	        }
	    }
	    
	    return false;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		int ans = obj.detectCycle(V, adj);
		cout << ans <<"\n";	}
	return 0;
}
// } Driver Code Ends