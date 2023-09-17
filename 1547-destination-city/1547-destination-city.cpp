class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>mp;
        set<string>seconds;
        for(int i = 0 ; i < paths.size() ; i++){
            mp[paths[i][0]]++;
            mp[paths[i][1]]++;
            seconds.insert(paths[i][1]);
        }
        for(auto x : mp){
            if(x.second == 1){
                if(seconds.find(x.first) != seconds.end()){
                    return x.first;
                }
            }
        }
        return "";
    }
};