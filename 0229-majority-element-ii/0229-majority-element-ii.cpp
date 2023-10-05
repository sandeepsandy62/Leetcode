class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i = 0 ; i < n ; i++){
            mp[nums[i]]++;
        }

        set<int>st;
        for(pair<int,int> p : mp){
            if(p.second > floor(n/3)){
                st.insert(p.first);
            }
        }

        vector<int>v;
        for(int x : st){
            v.push_back(x);
        }
        return v;
    }
};