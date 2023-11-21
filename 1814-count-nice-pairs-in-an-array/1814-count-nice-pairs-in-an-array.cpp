class Solution {
    
    private:
    int rev(int a){
        int rem = 0;
        int num = 0;
        while(a!=0){
            rem = a%10 ;
            num = num*10 + rem ;
            a /= 10;
        }
        return num ;
    }
    
public:
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0 ;
        int m = 1000000007;
        unordered_map<int,int>mp;
        for(int i = 0 ; i < n ; i++){
            
            if(mp.find(nums[i] - rev(nums[i])) != mp.end()){
                count = (count%m + (mp[nums[i] - rev(nums[i])])%m) % m ;
            }
            mp[nums[i] - rev(nums[i])]++;
            
        }
        return count ;
    }
};