class Solution {
    private:
    bool checkSeq(vector<int>& nums, vector<int>& l, vector<int>& r , int i){
        
        vector<int>partition(nums.begin()+l[i] , nums.begin()+r[i]+1);
        
        sort(partition.begin(),partition.end());
        
        for(int j = 0 ; j < partition.size()-1; j++){
            if(partition[j+1]-partition[j] != partition[1]-partition[0]) return false;
        }
        
        return true;
    }
    
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans ;
        int m = l.size();
        
        for(int i = 0 ; i < m ; i++)
            ans.push_back(checkSeq(nums,l,r,i));
        
        return ans;
    }
};