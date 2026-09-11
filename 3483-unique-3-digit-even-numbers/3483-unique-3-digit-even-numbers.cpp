class Solution {
public:
    int totalNumbers(vector<int>& digits) {
       int count=0;
       for(int i=100;i<1000;i+=2){
          int freq[10]={};
          for(auto x:digits){
            freq[x]++;
          }
           int temp=i;
           int ans=0;
          while(temp>0){
            int digit=temp%10;
            if(freq[digit]>0){
                freq[digit]--;

                ans++;
               
            } temp/=10;
            if(ans==3){
                count++;
            }
          }
           


       }
       return count;

        
    }
};