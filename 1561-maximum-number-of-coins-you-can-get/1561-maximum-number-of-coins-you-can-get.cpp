class Solution {
public:
    int maxCoins(vector<int>& piles) {
        //3 piles of coins
        //alice max num of coins 3
        //me next max num of coins 3
        //bob last pile of coins 3
        //repeat until no coins left
        
        int n = piles.size();
        int myturns = n/3 ;
        
        sort(piles.begin(),piles.end());
        int ans = 0;
        
        bool pick =false;
        for(int i = piles.size()-1 ; i >= 0 && myturns != 0 ; i--){
            if(pick){
                ans+=piles[i];
                myturns--;
                cout << piles[i] << " ";
                pick = false;
            }else{
                pick = true;
            }
        }
        return ans;
    }
};