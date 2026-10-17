class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
      
        int count=0;
        for(auto x:stones){

            if(jewels.find(x)!= string::npos){
                count++;
            }
        }
        

       return count; 
    }
};