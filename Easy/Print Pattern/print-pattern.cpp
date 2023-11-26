//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    
    private:
    
    void fun1(int &n , vector<int>&ans){
        if(n <= 0){
            return ;
        }
        ans.push_back(n);
        n = n-5 ;
        fun1(n , ans);
    }
    
    void fun2(int n , vector<int>&ans ,int m){
        if( n >= m){
            ans.push_back(n);
            return;
        }
        ans.push_back(n);
        fun2(n+5 , ans , m);
    }
    
public:
    vector<int> pattern(int N){
        // code here
        vector<int>ans;
        int m = N;
        fun1(N,ans);
        fun2(N,ans,m);
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends