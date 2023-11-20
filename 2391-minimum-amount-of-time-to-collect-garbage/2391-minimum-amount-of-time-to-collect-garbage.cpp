class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int collection_time = 0 ;
        int n = garbage.size();
        int m = travel.size();
        vector<int>prefix_time(m+1,0);

        
        for(int i = 0 ; i < n ; i++){
            collection_time += garbage[i].size();
        }
        
        for(int i = 1 ; i <= m ; i++){
            prefix_time[i] = (travel[i-1]+prefix_time[i-1]);
        }
        
        for(int i = 0 ; i <= m ; i++){
            cout << prefix_time[i] << " " ;
        }
        cout << "\n";
        
        
        
        bool g = false ;
         bool  mb = false ;
        bool p = false; 
        for(int i = n-1 ; i >= 0 ; i--){
            if(garbage[i].find('M') != string::npos && !mb){
              collection_time += prefix_time[i]; 
                mb = true;
                cout << " M " << collection_time << endl;
            }
            if(garbage[i].find('G') != string::npos && !g){
              collection_time += prefix_time[i]; 
                g = true;
                cout << " G " << collection_time << endl;
            }
            if(garbage[i].find('P') != string::npos && !p){
              collection_time += prefix_time[i]; 
                p = true;
                cout << " P " << collection_time << endl;
            }
        }
        
        return collection_time;
    }
};