class Solution {
public:
    int maxCoins(vector<int>& piles) {
        
        sort(piles.rbegin(),piles.rend());
        int ans=0;
       int n=piles.size()-(piles.size()/3);
       for(int i=1;i<n;i+=2){
           ans+=piles[i];
       }
       return ans;
    

       
       
        
        
    }
};